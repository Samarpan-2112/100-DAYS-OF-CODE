//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() {
    int n, num, binary = 0, place = 1, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while(num > 0) {
    remainder = num % 2;
    binary = binary + remainder * place;
    place = place * 10;
    num = num / 2;
    }
    printf("Binary of %d = %d\n", n, binary);
    return 0;
}
