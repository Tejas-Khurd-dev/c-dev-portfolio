#include <stdio.h>

void greet(){
    printf("Hello!\n");
    greet(); // --> Goes In Infinite loop
    return;
}
int main() {
    greet();
    return 0;
}
