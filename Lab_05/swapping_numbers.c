/*
 * Lab 05: Swapping two numbers using a temporary variable
 * Student: Vedant Tougde
 */
#include <stdio.h>

int main(void)
{
    int first = 10;
    int second = 5;
    int temporary;

    printf("Vedant Tougde\n");
    printf("Before swapping: first = %d, second = %d\n", first, second);

    temporary = first;
    first = second;
    second = temporary;

    printf("After swapping:  first = %d, second = %d\n", first, second);

    return 0;
}
