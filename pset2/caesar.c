//caesar's cipher
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

int encrypt_alpha(int c, int k, bool upper);
int cipher_string(string s);

int main(int argc, string argv[])
{
    string p;
    int k;
    int cipher_text[strlen(p)];
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
        
    //encrypt plaintext to ciphertext
        cipher_text = cipher_string(p);
    
    //print output cipher_text
        printf("Ciphertext: ");
        for (i = 0, i < strlen(p); i++)
        {
            printf("cipher_text[i]");
        }
        printf("\n");
    } 
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

int cipher_string(string s)
{
    //array to hold cipher_chars
    int cipher_string[strlen(s)];
    
    for (i = 0, i < lenstr(s); i++)
    {
        if (isalpha(s[i]) == false)
        {
            cipher_string[i] = s[i];
        }
        else
        {
            cipher_string[i] = encrypt_alpha(s[i], k, isupper(s[i]))
        }
    }
    //returns an array with int values for the ciphered chars
    return cipher_string;
}    