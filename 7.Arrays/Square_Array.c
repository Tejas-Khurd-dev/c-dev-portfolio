#include <stdio.h>

int main() {
    int arr[5] = {4, 6, 7, 8, 4};
   
    for(int i = 0; i < 5; i++)
        arr[i] *= arr[i];  

    printf("New array is: ");
    for(int i = 0; i < 5; i++) 
        printf("%d ", arr[i]);

    return 0;
}
