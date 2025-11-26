// return index if found, else return where it should be.
#include <stdio.h>
int if_inset_pos(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i; 
        }
        if(arr[i] > target){
            return i; 
        }
    }
    return size;
}
//example usage assuming the array input is sorted//
int main(void){
    int size, target;
    printf("Enter the number of elements in the sorted array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the sorted array:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the target integer:\n");
    scanf("%d", &target);
    int index = if_inset_pos(arr, size, target);
    printf("The target %d should be at index: %d\n", target, index);
    return 0;
}