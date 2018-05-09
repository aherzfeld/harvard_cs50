//receives changed owed as input and outputs the minimum number of coins

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float change_owed;
    //prompt user for input (non-negative)
    do 
    {
        change_owed = get_float("Change owed: ");    
    } 
    while (change_owed < 0);
    
    //algorithm to determine minimum coins required
    
    int quarters, dimes, nickles, pennies;
    if (change_owed > 0.25)
    {
        quarters = change_owed / 0.25;
        change_owed = change_owed % 0.25;
    }
    if (change_owed > 0.10)
    {
        dimes = change_owed / 0.10;
        change_owed = change_owed % 0.10;
    }
    if (change_owed > 0.05)
    {
        nickles = change_owed / 0.05;
        change_owed = change_owed % 0.05;
    }
    if (change_owed > 0.01)
    {
        pennies = change_owed / 0.01;
    }
    //print the minimum number of coins required
    {
    printf(quarters + dimes + nickles + pennies);
    }
}