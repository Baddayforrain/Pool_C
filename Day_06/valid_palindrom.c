//ts took me like half an hour
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool is_palindrome_tail(const char *str, int left, int right) {
    if (left >= right) {
        return true;
    }
    if (str[left] != str[right]) {
        return false;
    }
    return is_palindrome_tail(str, left + 1, right - 1);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int len = strlen(str);
    if (is_palindrome_tail(str, 0, len - 1)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }
    return 0;
}