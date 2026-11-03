#include <stdio.h>

int main()
{
    int dividend, divisor;

    printf("Vedant Tougde\n");
    printf("Enter two integers: ");

    if (scanf("%d %d", &dividend, &divisor) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (divisor == 0) {
        printf("Modulus by zero is not allowed.\n");
        return 1;
    }

    printf("Remainder = %d\n", dividend % divisor);
    return 0;
}
