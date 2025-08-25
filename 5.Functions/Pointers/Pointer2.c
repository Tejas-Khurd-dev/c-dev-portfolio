#include <stdio.h>

int main() {
    int x = 3;
    int* z = &x;
    printf("%d\n", x);

    *z = 7;
    printf("%d\n", x);
    return 0;
}
