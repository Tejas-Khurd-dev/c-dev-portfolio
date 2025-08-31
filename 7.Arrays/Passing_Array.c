#include <stdio.h>
void change(int X[]){
    X[0] = 10;
    return;
}
int main() {
    int arr [] ={3,4,5,6,5};
    printf("%d\n", arr[0]);
    change(arr);
    printf("%d", arr[0]);   
    return 0;
}