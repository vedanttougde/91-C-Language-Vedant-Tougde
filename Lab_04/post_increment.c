/*
 * Lab 04: Post-increment operator
 * Student: Vedant Tougde
 */
#include <stdio.h>

int main(void)
{
    int value = 6;
    int old_value;

    old_value = value++;

    printf("Vedant Tougde\n");
    printf("Value assigned before increment = %d\n", old_value);
    printf("Value after post-increment = %d\n", value);

    return 0;
}
