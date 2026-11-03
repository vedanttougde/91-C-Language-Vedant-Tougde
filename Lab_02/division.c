/*
 * Lab 02: Integer division
 * Student: Vedant Tougde
 */
#include <stdio.h>

int main(void)
{
    int dividend, divisor;

    printf("Vedant Tougde\n");
    printf("Enter the dividend and divisor: ");

    if (scanf("%d %d", &dividend, &divisor) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (divisor == 0) {
        printf("Division by zero is not allowed.\n");
        return 1;
    }

    printf("Quotient = %d\n", dividend / divisor);
    return 0;
}
