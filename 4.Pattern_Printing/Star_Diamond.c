#include <stdio.h>

int main() {
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);

    if (r % 2 == 0 || r < 0) {
        printf("Enter a positive odd number\n");
        return 0;
    }
    
    int nsp = r/2;
    int nst = 1;
    int ml = (r/2) +1;


    for(int i = 1; i <= r; i++){
        for (int j  = 1; j <= nsp; j++)
            printf("  ");
        
        for(int j = 1; j <= nst; j++)
            printf("* ");
        
        if(i<ml){
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        printf("\n");
    }
    return 0;
}