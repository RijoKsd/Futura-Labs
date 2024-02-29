/*
Write a program to print pattern 
*
* *
* * *
* * * * 
* * * * * 
*/

#include <stdio.h>
int main() {
    int size = 5;
    int i, j; 
    for ( i = 1; i <= size; i++){
        for ( j= 0; j < i; j++){
            printf("* ");
        }
        printf("\n");
    }
}