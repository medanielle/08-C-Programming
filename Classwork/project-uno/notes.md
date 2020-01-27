/*

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Help:\n%s <10 character serial key>\n", argv[0]);
    }
    else {
        int stringLength = strlen(argv[1]);
        if ((stringLength > 10) || (stringLength < 10)) {
            printf("[-] Serial key must be of 10 characters. Please recheck your key\n");
        }
        else {
            int XoredDecimal[10] = {};
            int keyStore[10] = {85, 86, 87, 88, 89, 90, 81, 82, 83, 84};

            for (int i=0; i<10; i++) {
                XoredDecimal[i] = ((int)(argv[1][i]))^(keyStore[i]);
            }
            CheckPass(XoredDecimal);
        }
    }
    return 0;
}
*/



/*
#include <stdio.h>
#include <string.h>
 
 
int main(void)
{
    const char password[15] = "login";
    char pass[15];
    int x;
    int log = 0;
     
    printf("Enter your password: ");
    scanf("%s", &pass);
    if(strcmp(pass, password) != 0)
    {
        log = 1;
    }
    else
    if(log == 0)
    {
        printf("\nSuccessful login...\n");
    }
    else
    {
        printf("\nInvalid password!\n");
    }
    */



    Branches


    $ git checkout -b iss53             //##  Switched to a new branch "iss53"

    $ git merge master                  // if master is update since you create your branch
                                        // get updates made to master onto your branch to manage conflicts

    $ git checkout master               //  Switched to branch 'master'

    $ git merge iss53                   // push your updates into master