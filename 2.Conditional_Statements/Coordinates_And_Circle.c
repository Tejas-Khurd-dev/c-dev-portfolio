// Radius and co-ordinates take input from user and wap to tell if co-ordinates lies on circle, inside circle or outside circle or outside circle

#include <stdio.h>

int main() {
    int x, y, r;
    printf("Enter the value of x co-ordinate: ");
    scanf("%d", &x);
    printf("Enter the value of y co-ordinate: ");
    scanf("%d", &y);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    int distancesquare = x*x + y*y;
    int radiussquare = r*r;

    if(distancesquare==radiussquare)
        printf("Point lies on circle");
    else if (distancesquare<radiussquare)
        printf("Point lies inside circle");
    else
        printf("Point lies outside circle");

    return 0;
}