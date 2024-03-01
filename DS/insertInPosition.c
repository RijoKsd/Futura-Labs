// Insert element at index
#include <stdio.h>
int main(){
    int size,arr[10], newValue, pos;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter elements\n");
    for(int i = 0; i< size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be inserted: ");
    scanf("%d", &newValue);
    printf("Enter position to be inserted: ");
    scanf("%d", &pos);
    for( int i = size; i >= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = newValue;
    size++;
    printf("Array after insertion\n");
    for(int i = 0; i< size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
