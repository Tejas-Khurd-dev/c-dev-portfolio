#include <stdio.h>

int main() {
    int n, hf;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n/2; i++)
    {
        if(n%i == 0) hf = i;
    }
    printf("Highest Factor: %d", hf);
    

    return 0;
}