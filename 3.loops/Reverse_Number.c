#include <stdio.h>

int main() {
    int num, ans = 0, last_digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    int copynum = num;

    if (copynum <0){
        copynum = -copynum;
    }

    while(copynum>0){
        last_digit =copynum%10;
        ans = ans*10 + last_digit;
        copynum /= 10;

    }

    if(num<0)
        printf("Reverse number is: %d", -ans);
    else
        printf("Reverse number is: %d", ans);
    return 0;
}