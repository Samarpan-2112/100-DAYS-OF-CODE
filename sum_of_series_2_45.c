//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main() {
    int n, i, num, den;
    float sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    num = 2;
    den = 3;
    i = 1;
    while(i <= n) {
    sum = sum + (float)num / den;
    num = num + 2;
    den = den + 4;
    i = i + 1;
    }
    printf("Sum = %f\n", sum);
    return 0;
}
