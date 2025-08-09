#include <stdio.h>

int main() {
    int num, last_digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        last_digit = num % 10;       
        if (last_digit % 2 == 0) {    
            sum += last_digit;
        }
        num /= 10;          
    }

    printf("The sum of even digits is: %d\n", sum);

    return 0;
}
