#include <stdlib.h>
#include <string.h>
#include <ctype.h> 

/*
The Vigenere cipher
--------------------
The Vigenere cipher is a method of encrypting alphabetic text. To encrypt a message, a key is needed that is as long as the message.
Usually, the key is a ***repeating*** keyword.

The encryption is done by adding a letter from the plain text to a letter of the key.
You must convert all uppercase letters to lowercase letters.
Each letter in the alphabet is given an index:
a = 0, b = 1, c = 2, d = 3, e = 4,........, w = 22, x = 23, y = 24, and z = 25

For example, if the keyword is "deceptive", the message “we are discovered save yourself” is encrypted as:

plaintext:    we are discovered save yourself
key:          de cep tivedecept ived eceptive
ciphertext:   zi cvt wqngrzgvtw avzh cqyglmgj

The cipher letter 'z' is the result of 'w' + 'd', which is 22 + 3 = 25

***Note*** that 'y' + 'e' = 'c' becuase (24 + 4) mod 26 = 2, which is c

In general, the encryption is done as follows:
Plaintext  P = (p0, p1, ...,pn-1)
Key        K = (k0, k1, ...,km-1)   ----> The original key length is m and the key will be repeated to match length af the plaintext
Ciphertext C = (c0, c1, ...,cn-1)

ENCRYPTION FORMULA: ci = [pi + k(i mod m)] mod 26

The function encryptVigenere takes two parameters: the input plain text and the key.
It returns a char pointer to the cipher text.
If the input or the key is NULL/EMPTY, the function returns NULL

*/



char* encryptVigenere(char* input, char* key)
{
	char * cipherText;
	return cipherText;
}