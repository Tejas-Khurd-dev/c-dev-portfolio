#include <stdio.h>

int main() {
    
    int num;
    
    printf("Enter number (1-7) to represent a week: ");
    scanf("%d", &num);
  
    switch (num)
    {
    case 1:
        printf("Sunday");
        break;
    
    case 2:
        printf("Monday");
        break;

    case 3:
        printf("Tuesday");
        break;

    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursdat");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid input");
    }
    return 0;
}