# Compiler and flags
CC = g++
LEX = flex -I
YACC = bison -d

SRC_DIR = ./src
LEX_YACC_DIR = ./grammar
BUILD_DIR = ./build
GENERATE_DIR = $(SRC_DIR)/generate
INC_DIR = $(SRC_DIR)/include

# Flags for debugging (remove or adjust as needed)
DEBUG_FLAGS = --debug --verbose -k # -Wcounterexamples --report all

# Compiler flags
CFLAGS = -g -I $(INC_DIR) -std=c++11 -ferror-limit=75 # -DYYDEBUG=1

# Target for the plcc executable
plcc: $(BUILD_DIR)/parser.o $(BUILD_DIR)/lex.yy.o
	$(CC) $(CFLAGS) $(BUILD_DIR)/parser.o $(BUILD_DIR)/lex.yy.o -ly -ll -lm -o plcc

# Rule to compile lex.yy.o and y.tab.o from their respective sources
$(BUILD_DIR)/lex.yy.o: $(GENERATE_DIR)/lex.yy.c $(GENERATE_DIR)/parser.hpp
	$(CC) -c $(CFLAGS) -o $@ $(GENERATE_DIR)/lex.yy.c

$(BUILD_DIR)/parser.o: $(GENERATE_DIR)/parser.cpp
	$(CC) -c $(CFLAGS) -o $@ $(GENERATE_DIR)/parser.cpp

# Generate parser files from grmr.y
$(GENERATE_DIR)/parser.cpp $(GENERATE_DIR)/parser.hpp: $(LEX_YACC_DIR)/parser.y
	$(YACC) -o $(GENERATE_DIR)/parser.cpp $(LEX_YACC_DIR)/parser.y

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
