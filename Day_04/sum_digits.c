#include <stdio.h>

int sum_digits(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a number n: ");
    scanf("%d", &n);
    int result = sum_digits(n);
    printf("Sum from 0 to %d is: %d\n", n, result);
    return 0;
}