#include <stdio.h>

int main() {
    int sum(int x ,int y);
    int ans = sum(5,7);
    printf("%d\n", ans);
    printf("%d", sum(5,5));
    return 0;
}
int sum(int a, int b){
    return a+b;
}