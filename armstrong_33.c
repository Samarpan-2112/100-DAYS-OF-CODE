//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main() {
    int n, num, sum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while(num > 0) {
    i = num % 10;
    sum = sum + i * i * i;
    num = num / 10;
    }
    if(n == sum) {
        printf("%d is an Armstrong number\n", n);
    } else {
    printf("%d is not an Armstrong number\n", n);
    }
    return 0;
}

