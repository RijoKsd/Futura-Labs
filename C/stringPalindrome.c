// Program to check whether a string is palindrome or not

#include <stdio.h>
#include <string.h>
int main(){
    char string[10], revString[10];
    printf("Enter a string: ");
    scanf("%s", string);
      strcpy(revString,string);
    //   printf("%s",strrev(revString));
     if ( strcmp(strrev(revString),string)==0 ){
        printf(" %s is palindrome",string);
     }else{
        printf(" %s is not a palindrome",string);
     }

}