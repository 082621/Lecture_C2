#include <stdio.h>

int main () {
    int number;
    printf("What is the number? ");
    scanf("%d", &number);

    if (number % 4 == 0 && number % 5 == 0)
        printf("The number is right.\n");
    else if (number == 0)
        printf("The number is not valid.\n");
    else
        printf("The number is not valid.\n");

    return 0;
}