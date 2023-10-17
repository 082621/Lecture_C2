#include <stdio.h>

int main () {
    float number;
    printf("What is the number? ");
    scanf("%f", &number);

    if (number > 0)
        printf("The number is belong to positive.\n");
    else if (number < 0)
        printf("The number is belong to negative.\n");
    else 
        printf("The number is 0.\n");

    return 0;
}