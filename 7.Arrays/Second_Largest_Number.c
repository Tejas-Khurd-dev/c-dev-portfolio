#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {4,6,7,5,2,3,12,38,4};
    int Smax = INT_MIN;
    int max = INT_MIN;
     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] > max) {
            Smax = max;   // previous max becomes second max
            max = arr[i]; // update max
        }
}
    printf("%d", Smax);
 
    return 0;
}
  
