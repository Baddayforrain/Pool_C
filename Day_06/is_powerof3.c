//Create is_powerof3.c. Return true if power of 3.
#include <stdbool.h>
#include <stdio.h>
bool is_power_of_3(int n) {
    if (n < 1) return false;
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}
int main() {
    int n;
    printf("Enter a postive number: ");
    scanf("%d", &n);
    if (is_power_of_3(n)) {
        printf("%d is a power of 3.\n", n);
    } 
    else {
        printf("%d is not a power of 3.\n", n);
    }
    return 0;
}