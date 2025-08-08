#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        if(num % 3 == 0) 
            printf("%d is divisible by both 3 and 5.\n", num);
        else
            printf("%d is divisible by 5 but not 3.\n", num);
    }
    else
        printf("%d is not divisible by 5 ans 3.\n", num);
        
    return 0;
}