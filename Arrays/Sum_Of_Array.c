#include <stdio.h>

int main() {
    int arr[5] = {4,6,7,8,4};
    int sum =0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    printf("Sum of array is: %d", sum);
    return 0;
}