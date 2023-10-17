#include <stdio.h>

int main () {
    int mark;
    printf("Input mark:");
    scanf("%d", &mark);
    if (mark >= 0 && mark <= 100) 
    {
        if (mark >= 40) 
        {
            printf("%d is a pass\n", mark);
        } 
        else 
        {
            printf("%d is a fail\n", mark);
        }
    }
    else 
    {
        printf("Mark is not valid.\n");
    }
    return 0;
}