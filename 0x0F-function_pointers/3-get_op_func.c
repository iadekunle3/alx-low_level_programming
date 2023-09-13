#include <stddef.h>
#include "3-calc.h"
// Ensure these functions are defined somewhere in your code
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int)
{
    int i = 0;
    char ops[] = "+-*/%";
    int (*fns[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};

    while (s[0] != ops[i] && i < 5)
        i++;

    // Add a default return statement
    if (i == 5)
        return NULL;

    return fns[i];
}

