// Program to print fibonacci series

#include <stdio.h>
int main(){
    int firstNum = 0,secondNum =1,limit ,nextNum, i = 0 ;

        printf("Enter the limit of fibonacci series: ");
        scanf("%d", &limit);

        printf("Fibonacci Series: ");

        while (i <= limit){
            printf("%d, ",firstNum);
            nextNum = firstNum + secondNum;
            firstNum = secondNum;
            secondNum = nextNum;
            i++;

        }


    return 0;
}
