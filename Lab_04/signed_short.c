#include <stdio.h>
#include <limits.h>

int main()
{
    signed short int number = 32767;

    printf("Vedant Tougde\n");
    printf("Value of signed short integer = %hd\n", number);
    printf("Minimum value = %hd\n", SHRT_MIN);
    printf("Maximum value = %hd\n", SHRT_MAX);

    return 0;
}
