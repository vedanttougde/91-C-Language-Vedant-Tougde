#include <stdio.h>

int main()
{
    int first, second;
    int total;

    printf("Vedant Tougde\n");
    printf("Enter two integers: ");

    if (scanf("%d %d", &first, &second) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    total = first + second;
    printf("Sum = %d\n", total);

    return 0;
}
