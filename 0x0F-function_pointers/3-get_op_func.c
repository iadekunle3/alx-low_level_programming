#include <stdio.h>
#include "3_calc.h"
/* Here is your get_op_func function */
int (*get_op_func(char *s))(int, int)
{
    struct operator
    {
        char* op;
        int (*f)(int, int);
    };
struct operator ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op != NULL && *(ops[i].op) != *s)
        i++;
    return (ops[i].f);
}
