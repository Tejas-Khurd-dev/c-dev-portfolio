#include <stdio.h>

void Japan(){
    printf("I am in Japan\n");
    return;
}

void Austrilia(){
    Japan();
    printf("I am in Australia\n");
    return;
}

void India(){
    Austrilia();
    printf("I am in India\n");
    return;
    
}

int main() {
    India();
    printf("I am in main function");
    return 0;
}