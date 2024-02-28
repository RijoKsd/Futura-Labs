// Program to print prime number upto the limit

#include <stdio.h>
int main(){
    int limit, flag;
    printf("Enter a number: ");
    scanf("%d", &limit);

    for (int i = 2; i<= limit; i++){
        flag = 0;
        for (int j = 2; j <= i/2; j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if( flag == 0){
            printf("%d \t",i);
        }

    }

    return 0;
}