//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter first number: "); 
    scanf("%d", &a);
    printf("Enter second number: "); 
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /, %): "); 
    scanf(" %c", &op);
    switch(op) {
    case '+': if(op=='+') printf("%d + %d = %d\n", a, b, a+b);
    case '-': if(op=='-') printf("%d - %d = %d\n", a, b, a-b);
    case '*': if(op=='*') printf("%d * %d = %d\n", a, b, a*b);
    case '/': if(op=='/') { 
    if(b!=0) printf("%d / %d = %d\n", a, b, a/b); 
    else printf("Division by zero not allowed\n"); 
    }
    case '%': if(op=='%') { 
    if(b!=0) printf("%d %% %d = %d\n", a, b, a%b); 
    else printf("Division by zero not allowed\n"); 
    }
    }
    return 0;
}
