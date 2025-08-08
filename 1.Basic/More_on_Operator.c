#include <stdio.h>
#include <stdbool.h> 

int main() {
    int a = 2, b = 3;

    bool x = true, y = false;

    // 3. Logical Operators
    printf("\nLogical Operators:\n");
    printf("x && y: %d\n", x && y);
    printf("x || y: %d\n", x || y);
    printf("!x: %d\n", !x);
    printf("!y: %d\n", !y);

    // 4. Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("a & b = %d\n", a & b);      // 10 & 11 = 10
    printf("a | b = %d\n", a | b);      // 10 | 11 = 11
    printf("a ^ b = %d\n", a ^ b);      // 10 ^ 11 = 01
    printf("~a = %d\n", ~a);            // bitwise NOT
    printf("a << 1 = %d\n", a << 1);    // left shift
    printf("a >> 1 = %d\n", a >> 1);    // right shift

    // 5. Unary Operator
    printf("\nUnary Operators:\n");
    int c = +a;
    int d = -a;
    printf("Assign +a in c i.e: %d\n", c);
    printf("Assign -a in d i.e: %d\n", d);

    printf("++a = %d\n", ++a);  // pre-increment
    printf("a++ = %d\n", a++);  // post-increment
    printf("After post-increment, a = %d\n", a);

    printf("--b = %d\n", --b);  // pre-decrement
    printf("b-- = %d\n", b--);  // post-decrement
    printf("After post-decrement, b = %d\n", b);

    return 0;
}
