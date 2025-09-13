//Write a program to check if a number is a strong number.
#include <stdio.h>
int main() {
    int n, num, d, i, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while(num > 0) {
    d = num % 10;
    fact = 1;
    i = 1;
    while(i <= d) {
    fact = fact * i;
    i = i + 1;
    }
    sum = sum + fact;
    num = num / 10;
    }
    if(sum == n) {
    printf("%d is a Strong Number\n", n);
    }
    else {
    printf("%d is not a Strong Number\n", n);
    }
    return 0;
}
