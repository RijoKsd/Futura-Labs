// Delete element in a unsorted array

#include <stdio.h>
int main(){
    int size,arr[10], pos;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter elements\n");
    for(int i = 0; i< size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter position to be deleted: ");
    scanf("%d", &pos);

    for( int i = pos-1; i < size; i++){
        arr[i] = arr[i+1];
    }
    size--;
    printf("Array after deletion\n");
    for(int i = 0; i< size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}