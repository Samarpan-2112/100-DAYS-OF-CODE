//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float cp, sp, amt;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);
    if(sp > cp) {
    amt = sp - cp;
    printf("Profit = %.2f\n", amt);
    printf("Profit %% = %.2f\n", (amt/cp)*100);
    } else if(cp > sp) {
    amt = cp - sp;
    printf("Loss = %.2f\n", amt);
    printf("Loss %% = %.2f\n", (amt/cp)*100);
    } else {
    printf("No profit no loss\n");
    }
    return 0;
}
