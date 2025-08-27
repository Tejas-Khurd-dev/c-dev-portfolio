#include <stdio.h>
int powerr(int base, int power){
    if(power == 1) return base;
    return base * powerr(base, power - 1);
}
int main() {
    int base, power;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);

    int ans = powerr(base,power);
    printf("The ans is %d\n", ans);
    return 0;
}