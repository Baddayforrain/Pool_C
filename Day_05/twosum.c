//ts was so confusing to write
#include <stdio.h>
#include <stdlib.h>
void twosum(int arr[], int size, int T, int *i1, int *i2) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == T) {
                *i1 = i;
                *i2 = j;
                return;
            }

        }
    }
}
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int T;
    printf("Enter the target sum:");
    scanf("%d", &T);
    int index1 = -1, index2 = -1;
    twosum(arr, size, T, &index1, &index2);
    if (index1 != -1 && index2 != -1) {
        printf("Array slots of elements adding to %d are: [%d, %d]\n", T, index1, index2);
    } else {
        printf("no two elements add up to %d\n", T);
    }
    return 0;
}
// it works i think?? atleast for me