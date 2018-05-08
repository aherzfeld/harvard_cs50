#include <stdio.h>
#include <cs50.h>

//prints out a half-pyramid of a height specified by the user
int main(void)
{
    //prompt user for number(n) between 0 and 23
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 0 || n > 23);
    //print out pyramid with height n
    //number of rows
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        //filling out the rows
        for (j = 0; j <= (n - 2 - i); j++)
        {
            printf(" ");
        }
        for (k = 0; k < (2 + i); k++)
        {
            printf("#");
        }
        printf("\n");
    }
}