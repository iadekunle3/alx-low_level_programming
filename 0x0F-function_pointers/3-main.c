#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
    int num1, num2;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Usage: calc num1 operator num2\n");
        return (1);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    operation = get_op_func(argv[2]);

    if (operation == NULL || (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%')))
    {
        printf("Error\n");
        return (1);
    }

    printf("%d\n", operation(num1, num2));
    return (0);
}

