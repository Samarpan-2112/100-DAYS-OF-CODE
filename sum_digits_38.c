//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int n, num, sum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while(num > 0) {
    i = num % 10;
    sum = sum + i;
    num = num / 10;
    }
    printf("Sum of digits of %d = %d\n", n, sum);
    return 0;
}
