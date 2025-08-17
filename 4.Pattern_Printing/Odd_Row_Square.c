#include <stdio.h>

int main() {
    int r,a =1;
    printf("Enter a rows: ");
    scanf("%d", &r);

    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= r; j++) {
            printf("%d ",a);


        }
        a+=2;
        printf("\n");
    }
    return 0;
}