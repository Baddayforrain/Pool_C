#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// this was so annoying to do right
// i did the advanced difficulty one
double history[5];  

int main(void){
    static int i = 0; 
    char input[10];

    printf("Welcome to the CLI Calculator!\n");
    printf("To move on to the operation selection, press anything.\n");
    printf("Type in 'history' to view last 5 calculations.\n");
    printf("Type in 'exit' to quit the calculator.\n");

    scanf("%s", input);

    if (strcmp(input, "history") == 0) {
        printf("Last 5 calculations:\n");
        for (int j = 0; j < 5; j++) {
            if (history[j] != 0) {
                printf("%d: %lf\n", j + 1, history[j]); 
            }
        }
        main();
    }

    if (strcmp(input, "exit") == 0) {
        printf("exiting the calculator. Goodbye!\n");
        return 0;
    }

restart:
    printf("choose an operation (+, -, *, /, ^ for power, sqrt for square root): ");
    char operation[10];
    scanf("%s", operation);

    double num1, num2, result;
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    if (strcmp(operation, "sqrt") != 0) {
        scanf("%lf", &num2);
    }

    if (strcmp(operation, "+") == 0) {
        result = num1 + num2;
    } 
    else if (strcmp(operation, "-") == 0) {
        result = num1 - num2;
    } 
    else if (strcmp(operation, "*") == 0) {
        result = num1 * num2;
    } 
    else if (strcmp(operation, "/") == 0) {
        if (num2 == 0) {
            printf("Error: Cannot divide by zero!\n");
            return 1;
        }
        result = num1 / num2;
    } 
    else if (strcmp(operation, "^") == 0) {
        result = pow(num1, num2);
    } 
    else if (strcmp(operation, "sqrt") == 0) {
        if (num1 < 0) {
            printf("Error: Cannot calculate square root of a negative number!\n");
            return 1;
        }
        result = sqrt(num1);
    } 
    else {
        printf("Error: Unknown operation '%s'!\n", operation);
        goto restart;
    }

    printf("Result: %lf\n", result);

    history[i] = result;
    i++;

    if (i >= 5) {
        i = 0;
    }

    printf("Calculation saved to history.\n");
    printf("Would you like to exit, view history, or calculate something else? (type 'exit' to quit, 'history' to view history, anything else to continue): ");
    scanf("%s", input);

    if (strcmp(input, "exit") == 0) {
        printf("Exiting the calculator. Goodbye!\n");
        return 0;
    } 
    else if (strcmp(input, "history") == 0) {
        printf("Last 5 calculations:\n");
        for (int j = 0; j < 5; j++) {
            if (history[j] != 0) {
                printf("%d: %lf\n", j + 1, history[j]);
            }
        }
        main();
    } 
    else {
        goto restart;
    }

    return 0;
}