// Program to print sum of 2 numbers read from user

#include <stdio.h>
int main(){
    int firstNum = 0, secondNum = 0, sum = 0;
    printf("Enter first and second number: ");
    scanf("%d %d",&firstNum, &secondNum);
    sum = firstNum  + secondNum;
    printf("Sum of %d  + %d = %d", firstNum,secondNum, sum);
    return 0;
}