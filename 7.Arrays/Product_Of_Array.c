#include <stdio.h>

int main() {
    int arr[5] = {2,6,2,2,1};
    int product =1;
    for(int i = 0; i < 5; i++){
        product *= arr[i];
    }
    printf("Product of array elements is: %d", product);
    return 0;
}