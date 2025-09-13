//Write a program to display the day of the week based on a number (1–7) using switch-case
#include <stdio.h>
int main() {
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);
    switch(day) {
        case 1:
            if(day == 1) printf("Monday\n");
        case 2:
            if(day == 2) printf("Tuesday\n");
        case 3:
            if(day == 3) printf("Wednesday\n");
        case 4:
            if(day == 4) printf("Thursday\n");
        case 5:
            if(day == 5) printf("Friday\n");
        case 6:
            if(day == 6) printf("Saturday\n");
        case 7:
            if(day == 7) printf("Sunday\n");
        default:
            if(day < 1 || day > 7) printf("Invalid input\n");
    }
    return 0;
}
