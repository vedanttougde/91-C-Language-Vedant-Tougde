/*
 * Lab 03: Bitwise operators
 * Student: Vedant Tougde
 */
#include <stdio.h>

int main(void)
{
    unsigned int left, right;

    printf("Vedant Tougde\n");
    printf("Enter two non-negative integers: ");

    if (scanf("%u %u", &left, &right) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Bitwise AND (&) = %u\n", left & right);
    printf("Bitwise OR  (|) = %u\n", left | right);
    printf("Bitwise XOR (^) = %u\n", left ^ right);
    printf("Complement of first number (~) = %u\n", ~left);
    printf("First number shifted left by 1 = %u\n", left << 1);
    printf("First number shifted right by 1 = %u\n", left >> 1);

    return 0;
}
