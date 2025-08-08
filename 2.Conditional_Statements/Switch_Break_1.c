#include <stdio.h>

int main() {
    
    int num1, num2;
    char ch;
    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c because we want to ignore the newline character left in the input buffer, basically we tells scanf to skip whitespaces including \n
    printf("Enter number two: ");
    scanf("%d", &num2);

 

    switch (ch)
    {
    case '+':
        printf("%d", num1+num2);
        break;
    
    case '-':
        printf("%d", num1-num2);
        break;

    case '*':
        printf("%d", num1*num2);
        break;

    case '/':
        if (num2 != 0)
            printf("%d", num1/num2);
        else
            printf("Error: Division by zero is not allowed.");
        break;
    default:
        printf("Error: Invalid operator.");
    }
    return 0;
}