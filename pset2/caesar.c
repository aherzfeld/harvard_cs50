//caesar's cipher
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int encrypt_alpha(int c, int k, bool upper);
int cipher_chars(char y, int k);

int main(int argc, string argv[])
{
    string p;
    int k;
    //error if one command-line argument not passed
    if (argc != 2)
    {
        printf("One argument expected\n");
        return 1;
    }
    //prompt user for string
    p = get_string("Plaintext: ");
        
    //assign command-line arg to k and convert to int 
    k = atoi(argv[1]);
    
    //print iterative output of string w/ cipher_c
    printf("Ciphertext: ");
    for (int i = 0; i < strlen(p); i++)
    {
        printf("%c", cipher_chars(p[i], k));
    }
    printf("\n"); 
}    

//takes as inputs: the character (int) at string[i], user input (int) k,
//and a boolean answer to isupper()
//returns cipher_char (int) 
int encrypt_alpha(int c, int k, bool upper)
{
    int cipher_char;
    
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
            return cipher_char;
        }
        else 
        {
            //no wrap-around
            cipher_char = c + k;
            return cipher_char;
        }    
    }
}

int cipher_chars(char y, int k)
{
    int cipher_c; 
    if (isalpha(y) == false)
    {
        cipher_c = y;
    }
    else
    {
        cipher_c = encrypt_alpha(y, k, isupper(y));
    }
    //returns ciphered char y
    return cipher_c;
}    