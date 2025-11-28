#include <stdio.h>
int main() {
    int size;
    printf("Enter size of the array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The reversed array:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}