// GP --> 1,2,4,6,....

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 1;
    for (int i = 1; i <=n ; i++)
    {
        printf("%d ", a);
        a *= 2;
    }
    
    return 0;
}