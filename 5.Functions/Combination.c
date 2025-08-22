#include <stdio.h>

int fact(int n){
    int fact = 1; 
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    int ans = ncr(n, r);
    printf("The value of ncr is: %d", ans);
    return 0;
}