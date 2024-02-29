// write a c program to print number pattern

#include <stdio.h>
int main(){
    int i,j, size = 5;
    for (i = 1; i <= size; i++){
        for (j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}