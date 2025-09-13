//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
int main() {
    float p, r, t, si, ci, a;
    int i;
    printf("Enter principal: ");
    scanf("%f", &p);
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    a = p;
    for(i = 1; i <= t; i++) {
        a = a * (1 + r/100);
    }
    ci = a - p;
    printf("SI = %f\n", si);
    printf("CI = %f\n", ci);
    return 0;
}
