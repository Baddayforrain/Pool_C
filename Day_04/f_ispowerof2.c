//Create f_ispowerof2.c. Check if x is exact power of 2.
#include <stdio.h>
int f_ispowerof2(int x) {
    if (x <= 0) {
        return 0; 
    }
    while (x > 1) {
        if (x % 2 != 0) {
            return 0;
        }
        x /= 2;
    }
    return 1;
}
int main() {
    int x;
    printf("Enter a number x: ");
    scanf("%d", &x);
    if (f_ispowerof2(x)) {
        printf("%d is an exact power of 2.\n", x);
    } else {
        printf("%d is not an exact power of 2.\n", x);
    }
    return 0;
}