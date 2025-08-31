#include <stdio.h>

int main() {
    int arr[5] = {4,6,7,8,4};
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d \n", arr[2]);

    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
