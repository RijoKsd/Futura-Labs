// write a c program to print character  pattern

#include <stdio.h>
int main(){
    int i,j, size = 5;
    for (i = 1; i <= size; i++){
        for (j = 1; j <= i; j++){
            printf("%c ", j + 64);
        }
        printf("\n");
    }
    return 0;
}