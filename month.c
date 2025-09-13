//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main() {
    int m;
    printf("Enter month number (1-12): ");
    scanf("%d", &m);
    switch(m) {
    case 1:
    if(m==1) printf("January - 31 days\n");
    case 2:
    if(m==2) printf("February - 28 or 29 days\n");
    case 3:
    if(m==3) printf("March - 31 days\n");
    case 4:
    if(m==4) printf("April - 30 days\n");
    case 5:
    if(m==5) printf("May - 31 days\n");
    case 6:
    if(m==6) printf("June - 30 days\n");
    case 7:
    if(m==7) printf("July - 31 days\n");
    case 8:
    if(m==8) printf("August - 31 days\n");
    case 9:
    if(m==9) printf("September - 30 days\n");
    case 10:
    if(m==10) printf("October - 31 days\n");
    case 11:
    if(m==11) printf("November - 30 days\n");
    case 12:
    if(m==12) printf("December - 31 days\n");
    default:
    if(m<1 || m>12) printf("Invalid month number\n");
    }
    return 0;
}
