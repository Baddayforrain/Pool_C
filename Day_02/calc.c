// short for calculator btw//
#include <stdio.h>
#include <stdlib.h>
int main(void){
    char operator;
    float firstn, secondn, resultn;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two operands: ");
    scanf("%f %f", &firstn, &secondn);

    switch(operator) 
    {
        case '+':
            resultn = firstn + secondn;
            break;
        case '-':
            resultn = firstn - secondn;
            break;
        case '*':
            resultn = firstn * secondn;
            break;
        case '/':
            if(secondn != 0)
                resultn = firstn / secondn;
            else {
                printf("Error: Cannot divide by zero.");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid number.");
            return 1;
    }

    printf("%.2f %c %.2f = %.2f\n", firstn, operator, secondn, resultn);
    return 0;
}