# Compiler and flags
CC = gcc
LEX = flex -I
YACC = bison -dy

SRC_DIR = ./src
LEX_YACC_DIR = ./grammar
BUILD_DIR = ./build
GENERATE_DIR = $(SRC_DIR)/generate

# Flags for debugging (remove or adjust as needed)
DEBUG_FLAGS = --debug --verbose -k # -Wcounterexamples --report all

# Compiler flags
CFLAGS = -DYYDEBUG=1

# Target for the plcc executable
plcc: $(BUILD_DIR)/y.tab.o $(BUILD_DIR)/lex.yy.o
	$(CC) $(CFLAGS) $(BUILD_DIR)/y.tab.o $(BUILD_DIR)/lex.yy.o -ly -ll -lm -o plcc

# Rule to compile lex.yy.o and y.tab.o from their respective sources
$(BUILD_DIR)/lex.yy.o: $(GENERATE_DIR)/lex.yy.c $(GENERATE_DIR)/y.tab.h
	$(CC) -c $(CFLAGS) -o $@ $(GENERATE_DIR)/lex.yy.c

$(BUILD_DIR)/y.tab.o: $(GENERATE_DIR)/y.tab.c
	$(CC) -c $(CFLAGS) -o $@ $(GENERATE_DIR)/y.tab.c

# Generate parser files from grmr.y
$(GENERATE_DIR)/y.tab.c $(GENERATE_DIR)/y.tab.h: $(LEX_YACC_DIR)/grmr.y
	$(YACC) -o $(GENERATE_DIR)/y.tab.c $(LEX_YACC_DIR)/grmr.y

# Generate lexer file from tokens.l
$(GENERATE_DIR)/lex.yy.c: $(LEX_YACC_DIR)/tokens.l
	$(LEX) -o $(GENERATE_DIR)/lex.yy.c $(LEX_YACC_DIR)/tokens.l

# Target for debugging mode
debug: YACC += $(DEBUG_FLAGS)
debug: plcc

# Clean up generated files
clean:
	rm -r $(BUILD_DIR) $(GENERATE_DIR)
	rm plcc

# Phony target to prevent conflicts with actual file names
.PHONY: clean debug

# Ensure build directories exist
$(shell mkdir -p $(BUILD_DIR) $(GENERATE_DIR))
