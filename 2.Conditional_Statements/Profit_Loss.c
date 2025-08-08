#include <stdio.h>

int main() {
    int sp, cp;
    printf("Enter a Cost Price of product: ");
    scanf("%d", &cp);
    printf("Enter a Selling Price of product: ");
    scanf("%d", &sp);

    if(sp > cp){
        int profit = sp - cp;
        float profit_percent = ((sp - cp) * 100.0) / cp;
        printf("Profit is: %d \n", profit);
        printf("%% of profit is : %.2f%% \n", profit_percent);
    }
    else if(cp > sp){
        int loss = cp - sp;
        float loss_percent = ((cp - sp) * 100.0) / cp;
        printf("Loss is: %d \n", loss);
        printf("%% of loss is : %.2f%% \n", loss_percent);
    }
    else {
        printf("No Profit No Loss \n");
    }

    return 0;
}
