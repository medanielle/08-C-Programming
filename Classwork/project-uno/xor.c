#include <stdio.h>
#include <string.h>

//function to check passwords that have been XOR'ed
void CheckPass(int *XoredPassword) {
    // intialize and set variable for player's password, and flag for errors
    int orig_pass[10] = {38, 34, 37, 55, 55, 61, 33, 51, 32, 39};
    int flag = 1; // 1 = True

    for (int i=0; i<10; i++) { // loop through the 10 chars of the original & inputted password
        if (XoredPassword[i] != orig_pass[i]) {
            flag = 0; // 0 == False ( aka the password's don't match)
            break;
        }
    }
    // if the password matched on every character
    if (flag == 1) {
        printf ("[+] Correct Password\n");
    }
    // Otherwise, it didn't match
    else {
        printf ("[-] Incorrect Password\n");
    }
}

//func to XOR a 10 character string
int XOR_pass(char * pass_in)
{
    //intialize value for final result
    int XoredDecimal[10] = {0};
    //intialize and set the key to be XOR'd against
    int keyStore[10] = {85, 86, 87, 88, 89, 90, 81, 82, 83, 84};

    for (int i=0; i<10; i++) { // loop through the 10 chars of the key & inputted password
        // set new value in variable for each char after XOR'ing it with the key
        XoredDecimal[i] = ((int)(pass_in[i]))^(keyStore[i]);
        // Debug // printf("I: %d \t X: %d\n", (int)(pass_in[i]), XoredDecimal[i]);
    }
    // send final value to function inorder to check if correct
    CheckPass(XoredDecimal);
    return 0;
}



int main()
{
    XOR_pass("password13");
    XOR_pass("strongpass");
    return 0;
}

