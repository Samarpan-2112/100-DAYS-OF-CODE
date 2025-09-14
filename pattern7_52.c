//Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*
#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
    for (j = 1; j <= i; j++) {
    printf("*\n");
    }
    if (i != 5) {
    printf("\n");
    }
    }
    for (i = 4; i >= 1; i--) {
    for (j = 1; j <= i; j++) {
    printf("*\n");
    }
    if (i != 1) {
    printf("\n");
    }
    }
return 0;
}