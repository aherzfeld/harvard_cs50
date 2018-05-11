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
    int key_len;
    int key[key_len];
    //error if one command-line argument not passed
    if (argc != 2)
    {
        printf("One argument expected\n");
        return 1;
    }
    //prompt user for string
    p = get_string("Plaintext: ");
        
    //assign command-line arg to k and convert to int 
    //iterate through chars in string argv[1] to fill key array
    key_len = strlen(argv[1]);
    
    for (e = 0; e < key_len; e++)
    {
        //convert chars to ints
        key[e] = atoi(argv[1][e]);
        //convert ints to vigenere's keys
        if (isupper(key[e]) == true)
        {
            key[e] -= 65;
        }
        else 
        {
            key[e] -= 97;        
        }
    }
    
    //print iterative output of string w/ cipher_c
    printf("ciphertext: ");
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
            c -= 65;
            cipher_char = (c + k) % 26;
            cipher_char += 65;
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
            c -= 97;
            cipher_char = (c + k) % 26;
            cipher_char += 97;
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