#include <stdio.h>

// Pass By Value
void swap(int a, int b){
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    int temp = b;
    b =a;
    a = temp;

    printf("After swap: a = %d, b = %d\n", a, b);
    
}
int main() {
    swap(5,7);
    return 0;
}