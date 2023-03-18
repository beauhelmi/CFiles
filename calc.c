#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an operator (+,-,*,/)");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", & num1 , & num2);

    switch(operator){   
        case '+':
            result = num1 + num2;
            printf("result = %.2lf \n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("result = %.2lf \n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("result = %.2lf \n", result);
            break;
        case '/':
            result = num1 / num2;
            printf("result = %.2lf \n", result);
            break;
        default:
            printf("Error! %c is not a valid operator\n", operator);                   
    }
    return 0;
}