// faxxx or something idk//
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;
    int factorial(int nb);
    printf("Enter a positive number: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Error, Factorial of a negative number does not exist.");
        return 1;
    }
    else {
        printf("Factorial of %d = %d\n", n, factorial(n));
        return 0;
    }
}

int factorial(int nb) {
    if (nb == 0) {
        return 1;
    } else {
        return nb * factorial(nb - 1);
    }
}
