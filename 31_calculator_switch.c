#include <stdio.h>
int main() {
    char op;
    double a, b, res;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    switch(op) {
        case '+': res = a + b; break;
        case '-': res = a - b; break;
        case '*': res = a * b; break;
        case '/': if(b!=0) res = a / b; else { printf("Divide by zero!\n"); return 1; } break;
        default: printf("Invalid operator\n"); return 1;
    }
    printf("Result: %.2lf\n", res);
    return 0;
}
