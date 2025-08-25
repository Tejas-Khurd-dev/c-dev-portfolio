#include <stdio.h>

int main() {
    int x = 10;
    int* ptr1 = &x;
    printf("%p\n", ptr1);

    int y = 9;
    int* ptr2 = &y;
    printf("%p\n", ptr2);

    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);


    return 0;
}
