#include <stdio.h>

int main() {
    int r;
    printf("Enter a rows: ");
    scanf("%d", &r);

    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= i; j++) {
            if(i%2 == 0) printf("%c ",j+64);
            else printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}