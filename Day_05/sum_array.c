#include <stdio.h>
int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    printf("What is the size of the array?");
    int size;
    scanf("%d", &size);
    int arr[size];
    printf("enter %d integers:2", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = sum_array(arr, size);
    printf("sum of array elements: %d", sum);
    return 0;
}