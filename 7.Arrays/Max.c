#include <stdio.h>
#include<limits.h>

int main() {
    // Method 1
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];
    for(int i = 0; i < n; i++) 
        if(arr[i] > max) max = arr[i];

    printf("Max number in array is: %d\n", max);
   

    // Method 2
    int MAX = INT_MIN;
    for(int i = 0; i < n; i++) 
        if(arr[i] > MAX) MAX = arr[i];

    printf("Max number in array is: %d", max);

     return 0;
}