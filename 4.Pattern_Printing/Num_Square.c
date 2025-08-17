#include <stdio.h>

int main() {
    int l;
    printf("Enter a length: ");
    scanf("%d", &l);

    for(int i = 1; i <= l; i++) {
        for(int j = 1; j <= l; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}