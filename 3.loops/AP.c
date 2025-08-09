//AP --> 1,3,5,7,9,.....
// an = a1 + (n-1)d --> 1+ nd -d --> 1+ 2n -2 --> 2n-1
#include <stdio.h>

int main() {
    int n;
    printf("Enter a num: ");
    scanf("%d",&n);

    printf("AP 1:\n");
    for (int i = 1; i <= 2*n -1; i+=2)
    {
        printf("%d ",i);
    }
    
    // AP --> 4,7,10,13,...
    // an = a1 + (n-1)d --> 4 +(n-1)3 --> 4+3n-3 --> 3n + 1 
    printf("\nAP 2:\n");
    for (int i = 4; i <= 3*n +1; i+=3)
    {
        printf("%d ",i);
    }

    printf("\n \n");
    printf("AP 1 by method 2:\n");
     int a=1;
    // Method 2 without formula
     for(int i = 1; i <=n; i++) {
        printf("%d ",a);
        a+=2;
    }
    return 0;
}