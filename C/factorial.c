// Program to print factorial of a read number;

#include <stdio.h>
int factorial(int num){
    if( num == 0) return 1;
    return num  * factorial(num - 1) ;
}
int main(){
    int num,factNum;
    printf("Enter a number: ");
    scanf("%d", &num);

    factNum = factorial(num);
    printf("%d",factNum);
    

    return 0;
}