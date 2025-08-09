#include <stdio.h>

int main() {
    int num, length =0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num>0){
        length ++;
        num /= 10;
    }

    printf("Length of entered number: %d",length);

    return 0;
}