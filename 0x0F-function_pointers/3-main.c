#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1, num2;
    int (*op_func)(int, int);

    if (argc != 4) {
        printf("Usage: calc num1 operator num2\n");
        return (1);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op_func = get_op_func(argv[2]);

    if (op_func == NULL) {
        printf("Invalid operator\n");
        return (1);
    }

    printf("%d\n", op_func(num1, num2));
    return (0);
}

