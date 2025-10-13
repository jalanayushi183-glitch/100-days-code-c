//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;


    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;

        case '%':
            
            if ((int)num2 != 0) {
                int res = (int)num1 % (int)num2;
                printf("Result = %d\n", res);
            } else {
                printf("Error! Modulus by zero.\n");
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
