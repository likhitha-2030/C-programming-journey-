#include <stdio.h>

int main() {
    float a, b;
    char operator;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (operator == '+')
        printf("Result = %.2f\n", a + b);
    else if (operator == '-')
        printf("Result = %.2f\n", a - b);
    else if (operator == '*')
        printf("Result = %.2f\n", a * b);
    else if (operator == '/')
        printf("Result = %.2f\n", a / b);
    else
        printf("Invalid operator\n");

    return 0;
}