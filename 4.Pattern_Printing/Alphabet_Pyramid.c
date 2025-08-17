#include <stdio.h>

int main() {
    int r;
    printf("Enter a rows: ");
    scanf("%d", &r);

    int nsp = r-1;
    int nst = 1;

    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=nsp; j++)
            printf("  ");
        
        for(int j = 1; j<=nst; j++)
            printf("%c ",j+64);
        
        nsp --;
        nst +=2;
        printf("\n");
    }
    return 0;
}