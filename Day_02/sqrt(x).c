// squirt ???//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void){
    double x, result;
    printf("Enter a positive number: ");
    scanf("%lf", &x);
    if(x < 0){
        printf("Erro cannot calculate square root of a negative number.");
        return 1;
    }
    result = floor(sqrt(x));
    printf("Square root of %.2f rounded down = %.2f\n", x, result);
    return 0;
}