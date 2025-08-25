#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a =  *b;
    *b = temp;

}
int main() {
    int a = 10;
    int b = 20;
    printf("Before changing a and b: a = %d, b = %d\n", a, b);
    swap(&a,&b);
    printf("After changing a and b: a = %d, b = %d\n", a, b);
    return 0;
}