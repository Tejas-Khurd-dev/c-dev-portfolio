#include <stdio.h>

int main() {
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int nst = r-1;
    int nsp = 1;

    for (int i = 1; i <= 2*r-1; i++)
    {
        printf("* ");
    }
    printf("\n");
    for (int i = 1; i <= r-1; i++)
    {
        for (int j = 1; j <= nst; j++){
            printf("* ");
        }

        for (int j = 1; j <= nsp; j++){
            printf("  ");    
        }
        for (int j = 1; j <= nst; j++){
            printf("* ");
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    
    return 0;
}