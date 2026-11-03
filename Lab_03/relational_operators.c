/*
 * Lab 03: Relational operators
 * Student: Vedant Tougde
 */
#include <stdio.h>

int main(void)
{
    int first, second;

    printf("Vedant Tougde\n");
    printf("Enter two integers to compare: ");

    if (scanf("%d %d", &first, &second) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("%d == %d : %d\n", first, second, first == second);
    printf("%d != %d : %d\n", first, second, first != second);
    printf("%d >  %d : %d\n", first, second, first > second);
    printf("%d <  %d : %d\n", first, second, first < second);
    printf("%d >= %d : %d\n", first, second, first >= second);
    printf("%d <= %d : %d\n", first, second, first <= second);

    return 0;
}
