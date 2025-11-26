#include <stdio.h>
//function to remove a target integer whenever found in array.//
int remove_int(int arr[], int size, int target){
    int j = 0; 
    for(int i = 0; i < size; i++){
        if(arr[i] != target){
            arr[j] = arr[i];
            j++;
        }
    }
    return j; 
}
//Example usage//
int main(void){
    int size, target;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the target integer to remove:\n");
    scanf("%d", &target);
    int new_size = remove_int(arr, size, target);
    printf("Array after removing %d:\n", target);
    for(int i = 0; i < new_size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}