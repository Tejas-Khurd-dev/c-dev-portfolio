#include <stdio.h>

int main() {
    int n;
    printf("Enter a number of row: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int min = i;
            if(j < min) min = j;                 
            if(n - j + 1 < min) min = n - j + 1;  
            if(n - i + 1 < min) min = n - i + 1; 
            printf("%d " , min);
        }
        printf("\n");
    }

    return 0;
}