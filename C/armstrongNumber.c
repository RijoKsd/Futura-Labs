// Program to check whether a number is armstrong or not

#include <stdio.h>
int main(){
    int num,orginalNum, remainder, result = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    orginalNum = num;

    while ( orginalNum != 0){ 
        remainder = orginalNum % 10;
        result += remainder * remainder * remainder;
        orginalNum /= 10;

        
    }
    if(result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);



    return 0;
}