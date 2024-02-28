// Program to check whether a number is palindrome or not

#include<stdio.h>
int main(){
    int num,orginalNum,remainder, reversedNum ;
    printf("Enter a number: ");
    scanf("%d",&num);
    orginalNum = num;
    while ( orginalNum != 0){
        remainder = orginalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        orginalNum /= 10;
    }
    ( reversedNum == num) ? printf("%d is a palindrome number",num) :  printf("%d is not a  palindrome number",num);
    return 0;
}