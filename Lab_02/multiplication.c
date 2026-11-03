/*
 * Lab 02: Multiplication of two integers
 * Student: Vedant Tougde
 */
#include <stdio.h>

int main(void)
{
    int number1, number2;
    int product;

    printf("Vedant Tougde\n");
    printf("Enter two integers: ");

    if (scanf("%d %d", &number1, &number2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    product = number1 * number2;
    printf("Product = %d\n", product);

    return 0;
}
