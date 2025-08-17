#include <stdio.h>

int main() {
    int l;
    printf("Enter a length: ");
    scanf("%d", &l);

    for(int i = 1; i <= l; i++) {
        int a = 1;
        for(int j = 1; j <= l; j++) {
            printf("%d ",a);
            a += 2;
        }
        printf("\n");
    }
    return 0;
}