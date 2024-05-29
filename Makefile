# Compiler and flags
CC = g++
LEX = flex -I
YACC = bison -dy
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SOURCES))

LEX_YACC_DIR = ./grammar
SRC_DIR = ./src
BUILD_DIR = ./build
INC_DIR = $(SRC_DIR)/include
GENERATE_DIR = $(SRC_DIR)/generate

# Flags for debugging (remove or adjust as needed)
DEBUG_FLAGS = --debug --verbose -k # -Wcounterexamples --report all

# Compiler flags
CFLAGS = -DYYDEBUG=1 -I$(INC_DIR)

# Target for the mypl executable
mypl: $(BUILD_DIR)/y.tab.o $(BUILD_DIR)/lex.yy.o $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(BUILD_DIR)/y.tab.o $(BUILD_DIR)/lex.yy.o -ly -ll -lm -o mypl

# Rule to compile object files from source files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

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
debug: mypl

# Clean up generated files
clean:
	rm -f mypl $(BUILD_DIR)/*.o $(GENERATE_DIR)/* y.output
	rm -r $(BUILD_DIR) $(GENERATE_DIR)

# Phony target to prevent conflicts with actual file names
.PHONY: all clean debug

# Ensure build directories exist
$(shell mkdir -p $(BUILD_DIR) $(GENERATE_DIR))