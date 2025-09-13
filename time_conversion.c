//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() {
    int sec, h, m, s;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);
    h = sec / 3600;
    sec = sec % 3600;
    m = sec / 60;
    s = sec % 60;
    printf("Time = %02d h : %02d m : %02d s\n", h, m, s);
    return 0;
}


