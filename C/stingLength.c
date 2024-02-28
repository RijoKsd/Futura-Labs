// Program to find string length without using strlen function;

#include <stdio.h>
int main(){
    char text[10];
    int length = 0;
    printf("Enter a string: ");
    scanf("%s",text);
    for ( int i = 0; text[i]!= '\0'; i++){
        length++;

    }
    printf("Length of string : %d", length);
    return 0;
}