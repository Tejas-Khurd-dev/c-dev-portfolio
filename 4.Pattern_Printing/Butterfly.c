#include <stdio.h>

int main() {
    int l;
    printf("Enter a length: ");
    scanf("%d", &l);

    if ( l <= 0 || l % 2 != 0) {
        printf("Please enter a positive even number.\n");
        return 1;
    }


    for (int i = 1; i <= l; i++) {
        for (int j = 1; j <= l; j++) {
            if (i ==j  || i+j == l+1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
