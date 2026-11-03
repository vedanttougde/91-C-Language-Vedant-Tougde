#include <stdio.h>

int main()
{
    int terms;
    int count;
    unsigned long long previous = 0, current = 1, next;

    printf("Vedant Tougde\n");
    printf("How many Fibonacci terms do you want (0-90)? ");

    if (scanf("%d", &terms) != 1 || terms < 0 || terms > 90) {
        printf("Please enter a number from 0 to 90.\n");
        return 1;
    }

    printf("Fibonacci series: ");
    for (count = 0; count < terms; count++) {
        printf("%llu", previous);

        if (count < terms - 1) {
            printf(" ");
        }

        next = previous + current;
        previous = current;
        current = next;
    }

    printf("\n");
    return 0;
}
