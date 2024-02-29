/* C program to print left half pyramid
 *
 * *
 * * *
 */

#include <stdio.h>
int main()
{
    int size = 5;
    int i, j;
    for (i = 1; i <= size; i++)
    {
        for (int space = 1; space <= size - i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}