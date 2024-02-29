// C program to print full pyramid

#include <stdio.h>
int main(){
    int i, j, space,size = 5;
    for (i = 1; i <= size;i++){
        for ( space = 1; space <=size -i; space++){
            printf(" ");
        }
        
        for(j = i; j >=1; j--){
            printf("*");
        }
        for ( int k = 2; k <= i; k++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}