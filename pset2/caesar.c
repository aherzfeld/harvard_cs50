//caesar's cipher
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

int encrypt(c, k, upper);

int main(int argc, string argv[])
{
    //error if one command-line argument not passed
    if (argc != 2)
    {
        printf("One argument expected\n");
        return 1
    }
    //prompt user for string
    {
        string p = get_string("Plaintext: ");
        
    //assign command-line arg to k and convert to int 
        int k = atoi(argv[1]);
           
    } 
}    

//takes as inputs: the character (int) at string[i], user input (int) k,
//and a boolean answer to isupper()
//returns cipher_char (int) 
int encrypt(c, k, upper);
{
    if (upper == true)
    {
        //uppercase letters
        if (k + c > 90)
        {
            //wrap-around from A to Z
            cipher_char = 64 + (90 % (c + k));
            return cipher_char;
        }
        else
        {
            //no wrap-around
            cipher_char = c + k;
            return cipher_char;
        }
    }
    else
    {   
        //lowercase letters 
        if (k + c > 122)
        {
            //wrap-around from z to a
            cipher_char = 96 + (122 % (c + k));
            return cipher_char    
        }
        else 
        {
            //no wrap-around
            cipher_char = c + k
            return cipher_char;
        }    
    }
}
    