#include <stdio.h>

void greet(int n){
    if (n == 0) return;
    printf("Hello!\n");
    greet(n-1); 
    return;
}
int main() {
    greet(3);
    return 0;
}