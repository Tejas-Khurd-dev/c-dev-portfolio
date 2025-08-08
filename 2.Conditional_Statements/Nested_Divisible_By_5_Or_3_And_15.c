#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num%15!= 0){
        if(num%3!= 0){
            if(num%5== 0)
                printf("Matched");
            else 
                printf("Not Matched");
        }
        else // num%3== 0
            printf("Matched");
    }
    else // num %15== 0
        printf("Not Matched");
        
    return 0;
}