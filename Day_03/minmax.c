#include <stdio.h>
// we use pointers to store min and max values since a function cannot return 2 values//

int minmax(int arr[], int size, int *min, int *max){

    *min = arr[0];
    *max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < *min){
            *min = arr[i];
        }
        if(arr[i] > *max){
            *max = arr[i];
        }
    }
}
//Example usage with an interactive array input//
int main(void){
    int size;
    printf("How many cells in the array?\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int min, max;
    minmax(arr, size, &min, &max);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    return 0;
}