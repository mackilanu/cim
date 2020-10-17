#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifndef LEXER_H
#define LEXER_H

enum {
    T_PLUS, T_MINUS, T_STAR, T_SLASH, T_INTLIT
};

struct token {
    int token;
    int intvalue;
};

#endif
