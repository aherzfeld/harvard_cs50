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
    for (int i = 0; i < n; i++)
    {
        printf(' ' * (n - 2 - i));
        printf('#' * (2 + i) + '\n');
    }
}