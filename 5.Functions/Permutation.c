#include <stdio.h>

int fact(int n){
    int fact = 1; 
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int npr(int n, int r){
    return fact(n)/fact(n-r);
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    int ans = npr(n, r);
    printf("The value of nPr is: %d", ans);
    return 0;
}