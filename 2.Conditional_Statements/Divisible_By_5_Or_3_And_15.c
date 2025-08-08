#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if((num % 5 == 0 || num % 3 == 0)&&(num%15==0)) printf("Number is divisible by 5 or 3 and 15");
    else printf("Number is not divisible by 5 or 3 and 15");
    
    return 0;
}