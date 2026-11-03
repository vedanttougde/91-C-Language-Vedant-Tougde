#include <stdio.h>

int main()
{
    int first, second;
    int difference;

    printf("Vedant Tougde\n");
    printf("Enter the first and second integers: ");

    if (scanf("%d %d", &first, &second) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    difference = first - second;
    printf("Difference = %d\n", difference);

    return 0;
}
