#include <stdio.h>

int main() {
    int arr[] = {4,6,7,8,4};
    int size_int = sizeof(int);
    int size_arr = sizeof(arr)/sizeof(int);
    printf("Size of int is: %d\n",size_int);
    printf("Size of arr is: %d\n",size_arr);
   
    char ch[] = {'A', '2', 'C', 'd', 'E','@'};
    int size_char = sizeof(char);
    int size_ch = sizeof(ch)/sizeof(char);
    printf("Size of char is: %d\n",size_char);
    printf("Size of ch is: %d\n",size_ch);
   
    return 0;
}