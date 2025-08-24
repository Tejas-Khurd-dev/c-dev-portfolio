#include <stdio.h>

int main() {
    {
        int x = 4;
        printf("%d\n", x);
    }
    int x = 5;
    printf("%d", x);
    return 0;
}
