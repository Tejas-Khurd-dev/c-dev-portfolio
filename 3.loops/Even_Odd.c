#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    // Even numbers
    printf("\nEven Numbers: \n");

    // Method 1
    for (int i = 0; i <= n; i++)
    {
        if(i%2==0) printf("%d ",i);
    }

    printf("\n \n");
    // Method 2
     for (int i = 0; i <= n; i+=2)
    {
        printf("%d ",i);
    }

    // Method 3
    printf("\n \n");
    for (int i = 0; i <= n; i++)
    {
        if (i%2 != 0) continue;
        printf("%d ",i); //  if statement does not contain printf(). The continue; is the only statement inside the if.
    }

     printf("\n\nOdd Numbers: \n");
    // Odd numbers

    // Method 1
     for (int i = 0; i <= n; i++)
    {
        if(i%2==0) continue;
        printf("%d ",i);
    }
    printf("\n \n");
    // Method 2
     for (int i = 1; i <= n; i+=2)
    {
        printf("%d ",i);
    }

    // Method 3
     printf("\n \n");
    for (int i = 0; i <= n; i++)
    {
        if (i%2 == 0) continue;
        printf("%d ",i); //  if statement does not contain printf(). The continue; is the only statement inside the if.
    }

    return 0;
}