// Delete element in unsorted array

#include <stdio.h>
int arraySort(int a[], int size)
{
    int temp;
    for (int i = 0; i < size -1; i++){
        for (int j = 0; j < size -1; j++){
            if ( a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
    int size, a[10],pos;
    printf("Enter the size of element: ");
    scanf("%d", &size);
    printf("Enter the elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    
    arraySort(a, size);
    printf("After sorting\n");
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\nEnter the position to be deleted: ");
    scanf("%d", &pos);
    for(int i = pos-1; i < size; i++){
        a[i] = a[i+1];
    }
    size--;
    printf("After deletion\n");
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    

    return 0;
}