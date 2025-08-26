#include <stdio.h>
#include<stdbool.h>

int main() {
    int n;
    bool flag = false;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) printf("0 is neither prime nor composite");
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i == 0){
            flag = true;
            break;
        }
    }
    
    if (flag == true)
        printf("Entered no. is composite");
    else
        printf("Entered no. is Prime");
    

    return 0;
}
