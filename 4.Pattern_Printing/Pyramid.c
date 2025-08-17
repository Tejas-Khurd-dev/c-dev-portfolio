#include <stdio.h>

int main() {
    int r;
    printf("Enter a rows: ");
    scanf("%d", &r);

    // Method 1
    for(int i = 1; i <= r; i++) {
        for(int j = 0; j <=r- i; j++) 
            printf("  ");
        
         for(int j = 1; j <= 2*i-1; j++) 
            printf("* ");
        
        printf("\n");
    }
    printf("\n");
    // Method 2
    int nsp = r-1;
    int nst = 1;

    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=nsp; j++)
            printf("  ");
        
        for(int j = 1; j<=nst; j++)
            printf("* ");
        
        nsp --;
        nst +=2;
        printf("\n");
    }
    return 0;
}