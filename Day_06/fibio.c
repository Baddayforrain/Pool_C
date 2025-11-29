//i lowk forgot what fibonacci's sequence is
#include <stdio.h>
long long fib_tail(int n, long long a, long long b) {
    if (n == 0) return a;
    if (n == 1) return b;
    return fib_tail(n - 1, b, a + b);
}
int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    long long result = fib_tail(n, 0, 1);
    printf("F(%d) = %lld\n", n, result);
    return 0;
}