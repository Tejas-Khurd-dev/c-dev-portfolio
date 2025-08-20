#include<stdio.h>

void oddEven(int x){
    if(x%2==0) printf("Number is even");
    else printf("Number id odd");
    return;
}
int main(){
    int a = 5;
    oddEven(a);
    return 0;
}
