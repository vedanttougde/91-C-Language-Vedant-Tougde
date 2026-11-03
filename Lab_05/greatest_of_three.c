#include <stdio.h>

int main()
{
    int first, second, third;
    int greatest;

    printf("Vedant Tougde\n");
    printf("Enter three integers: ");

    if (scanf("%d %d %d", &first, &second, &third) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    greatest = first;

    if (second > greatest) {
        greatest = second;
    }

    if (third > greatest) {
        greatest = third;
    }

    printf("Greatest number = %d\n", greatest);
    return 0;
}
