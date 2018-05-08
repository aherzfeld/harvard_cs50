#include <stdio.h>
#include <cs50.h>

//prints out a half-pyramid of a height specified by the user
int main(void)
{
    //prompt user for number(n) between 0 and 23
    do
    {
        int n = get_int("Number: ");
    }
    while (n < 0 || n > 23);
    //print out the height of the pyramid
    {
        printf("Height: %i\n", n);
    }
    //print out pyramid with height n
    //number of rows
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 2 - i); j++)
        {
            printf(' ');
        }
        for (int k = 0; k < (2 + i); k++)
        { 
            printf('#');
        }    
        printf('\n');
    }
}