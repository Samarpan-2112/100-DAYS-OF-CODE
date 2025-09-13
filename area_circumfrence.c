//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
    int r;
    float area, circ;
    printf("Enter radius: ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    circ = 2 * 3.14 * r;
    printf("Area = %f\n", area);
    printf("Circumference = %f\n", circ);
    return 0;
}
