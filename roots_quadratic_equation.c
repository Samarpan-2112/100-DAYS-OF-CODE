//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
int main() {
    float a, b, c, d;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    d = b*b - 4*a*c;
    if(d > 0) {
        printf("Roots are real and distinct\n");
    } else if(d == 0) {
        printf("Roots are real and equal\n");
    } else {
        printf("Roots are imaginary\n");
    }
    return 0;
}
