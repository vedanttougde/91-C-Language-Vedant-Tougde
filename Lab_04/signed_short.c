/*
 * Lab 04: Signed short integer
 * Student: Vedant Tougde
 */
#include <stdio.h>
#include <limits.h>

int main(void)
{
    signed short int number = 32767;

    printf("Vedant Tougde\n");
    printf("Value of signed short integer = %hd\n", number);
    printf("Minimum value = %hd\n", SHRT_MIN);
    printf("Maximum value = %hd\n", SHRT_MAX);

    return 0;
}
