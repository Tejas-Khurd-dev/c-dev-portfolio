#include <stdio.h>

int sum(int a){
    if (a==0) return 0;
    return a + sum(a-1);;
}
int main() {
    int ans = sum(5);
    printf("%d\n", ans);
    return 0;
}