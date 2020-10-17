#include "lexer.h"
#include "decl.h"
#define extern_
#include "data.h"
#undef extern_

char *tokstr[] = {"+", "-", "*", "/", "intlit"};

static void scanfile();
static void init();

int main(int argc, char *argv[])
{
    init();
    Infile = fopen(argv[1], "r");

    scanfile();

    return 0;
}

static void scanfile() {
    struct token T;

    while(scan(&T)) {
        printf("Token %s", tokstr[T.token]);

        if(T.token == T_INTLIT)
            printf(", value %d", T.intvalue);
        printf("\n");
    }
}

static void init()
{
    Line = 1;
    Putback = '\n';
}
