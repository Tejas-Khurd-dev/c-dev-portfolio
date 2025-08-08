#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) 
        printf("%d is negative it absolute is: %d\n", num, -num);
    else if (num>0) 
        printf("%d is positive it absolute is: %d\n", num, num);
    else 
        printf("Enter num is zero\n");

    return 0;
}