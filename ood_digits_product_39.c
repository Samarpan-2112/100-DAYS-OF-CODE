//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int n, num, i, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while(num > 0) {
    i = num % 10;
    if(i % 2 != 0) {
    product = product * i;
    }
    num = num / 10;
    }
    printf("Product of odd digits of %d = %d\n", n, product);
    return 0;
}
