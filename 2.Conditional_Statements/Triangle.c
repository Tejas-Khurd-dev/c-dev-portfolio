#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the first side of triangle: ");
    scanf("%d",&a);
    printf("Enter the second side of triangle: ");
    scanf("%d",&b);
    printf("Enter the third side of triangle: ");
    scanf("%d",&c);

    if(a+b>c && a+c>b && b+c>a) printf("It is a triangle");
    else printf("It is not a triangle");
    
    return 0;
}