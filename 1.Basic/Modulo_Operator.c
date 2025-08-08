#include<stdio.h>

int main(){
    printf("%d\n", 5%2); // = a%b
    printf("%d\n", 5%(-2)); // = a%b
    printf("%d\n", (-5)%2); // = -(a%b)
    printf("%d\n", (-5)%(-2)); // = -(a%b)
    printf("%d",5%5); // a%a = 0
    return 0;
}