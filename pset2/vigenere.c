//vigenere's cipher
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define LOWER 97
#define UPPER 65
#define ALPHABET 26

int encrypt_alpha(int c, int k, bool upper);
int cipher_chars(char y, int k);

int main(int argc, string argv[])
{
    string p;
    int k;
    int key_len = strlen(argv[1]);
    string key_phrase = argv[1];
    //error if one command-line argument not passed
    if (argc != 2)
    {
        printf("One argument expected\n");
        return 1;
    }
    else
    {
        //check that key isalpha
        for (n = 0; n < key_len; n++)
        {
            if (isalpha(key_phrase[n]) == false)
            {
                printf("Invalid key. Alpha characters only.");
                return 1;
            }  
        }
    }
    //prompt user for string
    p = get_string("Plaintext: ");
        
    //assign command-line arg to k and convert to int 
    //iterate through chars in string argv[1] to fill key array
    int key[key_len];
    
    for (int e = 0; e < key_len; e++)
    {
        //convert chars to ints
        key[e] = (key_phrase[e]);
        //convert ints to vigenere's keys
        if (isupper(key[e]) == true)
        {
            key[e] -= UPPER;
        }
        else 
        {
            key[e] -= LOWER;        
        }
    }
    
    //print iterative output of string w/ cipher_c
    printf("ciphertext: ");
    for (int i = 0, j = 0; i < strlen(p); i++, j++)
    {
        k = key[j % key_len];
        
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
        //wrap-around from A to Z
        c -= UPPER;
        cipher_char = (c + k) % ALPHABET;
        cipher_char += UPPER;
        return cipher_char;
    }
    else
    {   
        //wrap-around from z to a
        c -= LOWER;
        cipher_char = (c + k) % ALPHABET;
        cipher_char += LOWER;
        return cipher_char;
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