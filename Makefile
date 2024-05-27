# Compiler and flags
CC = g++
LEX = flex -I
YACC = bison -dy

# Flags for debugging (remove or adjust as needed)
DEBUG_FLAGS = --debug --verbose -k # -Wcounterexamples --report all

# Compiler flags
CFLAGS = -DYYDEBUG=1

# Target for the plcc executable
mypl: y.tab.o lex.yy.o mypl.o
	$(CC) $(CFLAGS) mypl.o y.tab.o lex.yy.o -ly -ll -lm -o mypl

mypl.o: mypl.cpp
	$(CC) -c $(CFLAGS) mypl.cpp

# Rule to compile lex.yy.o and y.tab.o from their respective sources
lex.yy.o y.tab.o: lex.yy.c y.tab.h

# Generate parser files from grmr.y
y.tab.c y.tab.h: grmr.y
	$(YACC) grmr.y

# Generate lexer file from tokens.l
lex.yy.c: tokens.l
	$(LEX) -o lex.yy.c tokens.l

# Target for debugging mode
debug: YACC += $(DEBUG_FLAGS)
debug: plcc

# Clean up generated files
clean:
	rm -f mypl *.o y.tab.* lex.yy.c y.output

# Phony target to prevent conflicts with actual file names
.PHONY: clean debug
