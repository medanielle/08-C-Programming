#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void encryptDecrypt(char *input, char *output)
{
    // set up varibles for key and counter i
    char key[] = { 'K', 'C', 'Q' }; //Can be any chars, and any size array
    int i;
    //loop through input string
    for (i = 0; i < strlen(input); i++) {
        //xor through each char in the string
        output[i] = input[i] ^ key[i % (sizeof(key) / sizeof(char))];
    }
    //makesure it ends with a null
    output[strlen(input)] = '\0';
    //DEBUG   printf("\n e/d() \t %s is encrypted into %s\n\n", input, output);
    //return output;
}
void serverDecryptedText(char* encryptedText, char* decryptedNormalText)
{
    /*Assumed: Server got encryptedText*/
    encryptDecrypt(encryptedText, decryptedNormalText);
    /*You will get original text in decryptedNormalText*/

}
void sendToServerWithEncryption(char* normalText, char* encryptedText)
{
    encryptDecrypt(normalText, encryptedText);
    /*Implement code to send encryptedText to server here */
}

int server_check_pass(char* encrypted_entry, char * encrypted_pass) {
    // intialize and set variable for player's password, and flag for errors

    int flag = 1; // 1 = True
    //DEBUG   printf("entry: %s \t pass: %s \n", encrypted_entry, encrypted_pass);
    // loop through the 10 chars of the original & inputted password  sizeof(xored_entry)/sizeof(xored_entry[0])
    for (int i=0; i<strlen(encrypted_entry); i++) 
    { 
        //printf("entry: %d \t orig: %d\n", *(encrypted_entry + i), *(encrypted_pass + i)); //DEBUG 
        if (*(encrypted_entry + i) != *(encrypted_pass + i)) 
        {
            flag = 0; // 0 == False (aka the password's don't match)
            break;
        }
    }
    //DEBUG
    /*if (flag == 1) {      // if the password matched on every character
        printf ("[+] Correct Password\n");
    }
    else {        // Otherwise, it didn't match
        printf ("[-] Incorrect Password\n");
    }    */
    return flag;
}
int encrypt_and_check(char* baseStr, char * password)
{
    
    //set up variable for encrypted text strings
    char *encrypted = (char*)malloc(strlen(baseStr)+1); 

    sendToServerWithEncryption(baseStr, encrypted);
    //DEBUG   printf("Encrypted:%s\n\n\n", encrypted);

    //char * password = "#,!.%$'/(";  //hopefully
    int flag = server_check_pass(encrypted, password);
    return flag;
}

char * test_encrypt(char* baseStr)
{

    //set up variables for output of encrypted text strings
    char *encrypted = (char*)malloc(strlen(baseStr)+1); 

    // call on encryption (and maybe connection?)
    sendToServerWithEncryption(baseStr, encrypted);
    //DEBUG   printf("%s is encrypted into %s\n\n", baseStr, encrypted);

    return encrypted;
}

char * test_decrypt(char* baseStr)
{

    //set up variables for decrypted text strings
    char *decrypted = (char*)malloc(strlen(baseStr) + 1);

    serverDecryptedText(baseStr, decrypted);
    //DEBUG   printf("%s is decrypted into %s\n\n", baseStr, decrypted);
    return decrypted;
}
/*
int main(){
    
    char * entry = test_encrypt("test");
    char * pass = test_encrypt("blah");
    printf("Test Password \t%s\t%s\t%d\n", test_decrypt(entry), test_decrypt(pass), server_check_pass(entry, pass));

}
*/

/*
To update/change the dll file (Windows)
    1) Update the .c file and save it
    2) Execute "gcc -fPIC -c [FILENAME].c" in the vs code terminal
    3) Execute "gcc [FILENAME].o -shared -o lib[BRIEF_FILENAME].dll" in the vs code terminal
    4) DLL file has been created and is ready for use
    
Python Code expected to use this library:
    # To use the custom C Library
    from ctypes import *
    libPass = CDLL("./libpassword.dll")

    # xor a string (func)
    password = "test"
    c_password = (c_char_p * len(password))(*password)
    xored_orig_pass = libPass.xor_pass(c_password, len(password))

    entry = "test"
    c_entry = (c_char_p * len(password))(*password)
    xored_entry_pass = libPass.xor_pass(c_password, len(password))



    # Test password 
    xored_orig_pass = {33, 51, 36, 44}
    xored_entry_pass = {33, 51, 36, 44}

    
    # Creates a c and python cross-compatable array (array<c_int>)
    c_xor_orig_pass = (c_char_p * len(orig_pass))(*orig_pass)
    c_xor_entry_pass = (c_char_p * len(entry_pass))(*entry_pass)

    # Gets the score total as an int
    result = bool(libScore.checkpass(c_xor_entry_pass, c_xor_orig_pass))
*/