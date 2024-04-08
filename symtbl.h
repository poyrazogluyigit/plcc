#define NSYMS 20   // Stands for the maximum number of symbols.

struct symtable {
    char *name;
    long int value;
} symtable[NSYMS];

struct symtab *symlook();