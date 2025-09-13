//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main() {
    int n, i, s = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        s = s + i;
    }
    printf("Sum = %d\n", s);
    return 0;
}
