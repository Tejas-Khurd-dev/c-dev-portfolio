#include <stdio.h>

long long int fact(int n) {
    if (n == 0 || n == 1) return 1; 
    else return n * fact(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num > 20) {
        printf("Number too large! Try with number <= 20.\n");
    } else {
        printf("Factorial of %d is %lld\n", num, fact(num));
    }

    return 0;
}
