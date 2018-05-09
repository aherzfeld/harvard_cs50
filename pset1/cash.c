//receives changed owed as input and outputs the minimum number of coins

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float c;
    //prompt user for input (non-negative)
    do 
    {
        c = get_float("Change owed: ");    
    } 
    while (c < 0);
    
    //convert float to int for calculation
    int change_owed;
    {
        c = c * 100;
        change_owed = (int) c;
    }
    //algorithm to determine minimum coins required
    
    int quarters, dimes, nickles, pennies;
    if (change_owed > 25)
    {
        quarters = change_owed / 25;
        change_owed = change_owed % 25;
    }
    if (change_owed > 10)
    {
        dimes = change_owed / 10;
        change_owed = change_owed % 10;
    }
    if (change_owed > 5)
    {
        nickles = change_owed / 5;
        change_owed = change_owed % 5;
    }
    if (change_owed > 1)
    {
        pennies = change_owed / 1;
    }
    //print the minimum number of coins required
    {
    printf(quarters + dimes + nickles + pennies);
    }
}