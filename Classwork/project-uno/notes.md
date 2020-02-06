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



-- Adding Repo to VScode
Ctr+Shift+P 
type Git clone
paste link to repo 
it will download in bottom right
then choose create a new workspace if necessary



-- Create branch for your issue
click on master (in blue bar) on bottom left
click 'create new branch from...'
then enter your branch name (can be descriptive/ or based on issue number)
make sure your are creating it from the master (normally)




-- update your branch
go to: source control on left (looks like three dots)
click the + sign next to change to stage them (or go to the ... on project line and click stage all)
then commit changes by clicking in the Message box below the project title 
enter your message then hit enter to commit


-- get updates from master (when your are behind and there were other people contributing)
go to: source control on left (looks like three dots)
go to the ... on project line and click 'Pull from ...'
pop up bar will appear, select the repo (http://... team-omega_project.git)
then select the origin/master (to pull updates from)
**You may need to deal with merge conflicts if you are working in the same document.


-- Merge request/merge your branch with master
got to our github team-omega (https://github.com/Shady-Data/Team-Omega_project/)
click on the "pull request" tab
click create new pull request 
the master should be the base, and you should chose your branch to compare
"When thinking about branches, remember that the base branch is where changes should be applied, the head branch contains what you would like to be applied."

You can see your changes on the bottom (red deletions/ green additions)
then click create pull request (green buttpn towards the top)
add 'closes ###' or 'resolves ###" with the issue number to close the issue that you fixed in the branch



-- delete your branch(if we get too many)
Ctrl+Shift+P Git: Delete Branch
or in git hub.com









________________________________________________________________________________________________________
    

    $ git clone http://....

    $ git checkout -b iss53             //##  Switched to a new branch "iss53"  (-b creates a new branch)

    $ git merge master                  // if master is updated since you create your branch
                                        // get updates made to master onto your branch to manage conflicts

    $ git checkout master               //  Switched to branch 'master'

    $ git merge iss53                   // push your updates into master