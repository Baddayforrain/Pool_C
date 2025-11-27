#include <stdio.h>
#include <stdlib.h>

int f_tableau_multi(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}

int main() {
    int n;
    printf("Enter a number n: ");
    scanf("%d", &n);
    f_tableau_multi(n);
    return 0;
}