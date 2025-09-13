//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int a, b, lcm;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    lcm = (a > b) ? a : b;
    while(lcm % a != 0 || lcm % b != 0) {
        lcm = lcm + 1;
    }
    printf("LCM = %d\n", lcm);
    return 0;
}