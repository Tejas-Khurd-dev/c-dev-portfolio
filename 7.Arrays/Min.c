#include <stdio.h>
#include<limits.h>

int main() {
    // Method 1
    int arr[] = {-1,2,3,4,5,6,-7,8};
    int n = sizeof(arr)/sizeof(int);
    int min = arr[0];
    for(int i = 0; i < n; i++) 
        if(arr[i] < min) min = arr[i];

    printf("Max number in array is: %d\n", min);
   

    // Method 2
    int MIN = INT_MAX;
    for(int i = 0; i < n; i++) 
        if(arr[i] < MIN) MIN = arr[i];

    printf("Max number in array is: %d", MIN);

     return 0;
}