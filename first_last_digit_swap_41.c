//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int n, num, first, last, count=0, pow=1, swap;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    last = num % 10;
    while(num > 0) {
    first = num % 10;
    num = num / 10;
    count = count + 1;
    }
    while(count > 1) {
    pow = pow * 10;
    count = count - 1;
    }
    swap = (last * pow) + (n % pow) - last + first;
    printf("After swap = %d\n", swap);
    return 0;
}
