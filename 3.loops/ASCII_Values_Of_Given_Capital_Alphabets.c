#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num>=65&& num<=90){
        for(int i = 65; i <= num; i++){
            printf("%c ", i);

        }
    }
    else printf("Invalid Input");
    return 0;
}