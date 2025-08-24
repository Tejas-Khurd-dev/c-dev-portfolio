#include <stdio.h>
void swap(int a, int b){
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("After swap: a = %d, b = %d\n", a, b);
    
}
int main() {
    swap(5,7);
    return 0;
}