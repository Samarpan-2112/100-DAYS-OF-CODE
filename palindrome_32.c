//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int n, num, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while(num > 0) {
    digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;
    }
    if(n == rev) {
    printf("%d is a palindrome\n", n);
    } else {
    printf("%d is not a palindrome\n", n);
    }
    return 0;
}
