#include<stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age<18) printf("Not allowed, You are below 18");
    else if (age>=60) printf("Not Allowed, You are above 60");
    else printf("Allowed");

    return 0;
}
