#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks out of 100: ");
    scanf("%d", &marks);

    if(marks> 80 && marks<=100) printf("Very Good (A Grade)");
    else{
        if(marks>60 && marks<=80) printf("Good (B Grade)");
        else{
            if(marks>50 && marks<=60) printf("Fair (C Grade)");
            else{
                if(marks>34 && marks<=50) printf("Pass (D Grade)");
                else printf("Fail");
            }
        }
    }
 
    return 0;
}