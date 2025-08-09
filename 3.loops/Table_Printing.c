#include <stdio.h>

int main() {
    int n;
    printf("Enter a num: ");
    scanf("%d",&n);

     printf("\nMethod 1\n");
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d \n",n,i,n*i);
    }

    // Method 2
    printf("\nMethod 2 \n");
    for(int i=n; i<=n*10; i++){
        if(i%n == 0) printf("%d \n",i);
    }
    return 0;
}