//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int n, num, digit, ones = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    num = n;
    while(num > 0) {
    digit = num % 10;
    if(digit == 0)
    digit = 1;
    else
    digit = 0;
    ones = ones + digit * place;
    place = place * 10;
    num = num / 10;
    }
    printf("1's complement of %d = %d\n", n, ones);
    return 0;
}
