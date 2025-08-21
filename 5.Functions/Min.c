#include <stdio.h>
int min (int a, int b){

    if(a<b) return a;   
    else return b;
}
int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    if(a == b) {
        printf("You have entered same numbers");
        return 0;
    }
    int ans = min(a,b);
    printf("The minimum number is: %d",ans);
    return 0;
}