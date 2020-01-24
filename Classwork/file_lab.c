
#include <stdio.h>

int char_by_char(const char * string)
{
    FILE * myFile_ptr = fopen(string, "r"); // Opens a read-only file
    char readFromFile = 0; // Store char-by-char input from myFile_ptr
    if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
    {
        while (readFromFile != EOF) // Continue reading until the end of file
        {
            readFromFile = getc(myFile_ptr); 	// Read one character
            putc(readFromFile, stdout); 		// Print that character
        }
        fclose(myFile_ptr); // Always fclose anything you fopen
    }
    else 			// …Otherwise, fopen() failed
    {
        puts("Error opening file!"); 	// Tell the user and…
        return -1;			// …Return an error value
    }
    return 0;
}


int line_by_line(const char * string)
{
    FILE * myFile_ptr = fopen(string, "r"); // Opens a read-only file
    char tempBuff[256] = { 0 };	// Temporary buffer to store read lines
    char * tempReturnValue = tempBuff; // Holds fgets() return value
    if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
    {
        while (tempReturnValue) // Continue reading until return value is NULL
        {
            tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
            if (tempReturnValue) 	// If EOF hasn’t been reached…
            {
                //puts(tempBuff);	// …print the buffer
                printf("%s", tempBuff);
            }
        }
        fclose(myFile_ptr); // Always fclose anything you fopen
    }
    else 			// …Otherwise, fopen() failed
    {
        puts("Error opening file!"); 	// Tell the user and…
        return -1;			// …Return an error value
    }
    return 0;
}
/*

PERORMANCE LAB: MIGHTY MORHPIN'
      File I/O – getc() “Mighty Morphin”

      Save the lyrics for the Mighty Morphin' Power Rangers theme song into a text file.

      Write a C program to:

         Open the file in read-only mode
         Read it char-by-char
         Print each char as it is read
         Close the file at the end
*/

int power_rangers(){
    char_by_char("lyrics.txt");
}

/*
PERFOMANCE LAB: YOUR SONG
File I/O – fgets() “Your Song”

Save your favorite song into a text file.

Write a C program to:

Open the file in read-only mode
Read it line-by-line
Print each line as it is read
Close the file at the end
*/

int fav_song(){
    line_by_line("lyrics.txt");
}

/*

      PEFORMANCE LAB: CONTENT COPY CHAR-BY-CHAR
      File I/O – putc()

      “Content Copy”

      Open an existing file in read mode.
      Open a new file in write mode.
      Copy the existing file into the new file char-by-char.
      Close the existing file.
      Close and open the new file in read mode.
      Print the new file char-by-char.

*/

int copy_char(){
    //Open an existing file in read mode.    &    Open a new file in write mode.
    FILE * file_ptr = fopen("lyrics.txt", "r");
    FILE * file_ptr2 = fopen("lyrics2.txt", "w");

    // in case it doesn't open
    if (file_ptr == NULL || file_ptr2 == NULL)
    {
        printf("Couldn't open at least one file");
        return -1;
    }
    // if it does open both
    else
    {
        // declare char variable for each char and set up while loop to check for end of file
        char c = 0;
        while (c != EOF)
        {
            //Copy the existing file into the new file char-by-char.
            c = getc(file_ptr);
            putc(c, file_ptr2);
        }
        //Close the existing file.    &    Close and open the new file in read mode.
        fclose(file_ptr);
        fclose(file_ptr2);
    }
    
    char_by_char("lyrics2.txt");
    return 0;
}


/*
   PERFORMANCE LAB: CONTENT COPY (LINE-BY-LINE)
   File I/O – fputs()

   “Content Copy”

         Open an existing file in read mode.
         Open a new file in write mode.
         Copy the existing file into the new file line-by-line .
         Close the existing file.
         Close and open the new file in read mode.
         Print the new file line-by-line.
*/

int copy_line()
{
    // Open an existing file in read mode. &  Open a new file in write mode.
    FILE * myFile_ptr = fopen("lyrics.txt", "r"); 
    FILE * myFile_ptr2 = fopen("lyrics2.txt", "w"); 

    char tempBuff[256] = { 0 };	// Temporary buffer to store read lines
    char * tempReturnValue = tempBuff; // Holds fgets() return value

    if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
    {
        while (tempReturnValue) // Continue reading until return value is NULL
        {
            tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
            if (tempReturnValue) 	// If EOF hasn’t been reached…
            {
                //Copy the existing file into the new file line-by-line .
                fputs(tempBuff, myFile_ptr2);
            }
        }
    }
    else 			// …Otherwise, fopen() failed
    {
        puts("Error opening file!"); 	// Tell the user and…
        return -1;			// …Return an error value
    }
    // Close the existing file.    &    Close the new file 
    fclose(myFile_ptr); 
    fclose(myFile_ptr2);

    //Print the new file line-by-line.
    line_by_line("lyrics2.txt");
    return 0;
}

/*

   PERFORMANCE LAB: USERNAMES
   File I/O – fprintf()

      “Usernames”

         Prompt the user for the number of students.

         Read the first, middle, and last name for each student.

         Remove any newline characters from all strings.

         Append each name to a “class roster” file in the following format:

         For George Herbert Dubya Bush, write the following to the the file...George H. Dubya Bush has a username of ghdbush.
   BUILD THOSE SAFETY CHECKS!!!!!a

*/
#include<string.h>
#include<ctype.h>
int usernames(void)
{
    // Get the number of students
    printf("How many students?\n");
    int num = 0;
    scanf("%d", &num);
    fseek(stdin, 0, SEEK_END);
    // Open the file in append mode
    FILE * roster = fopen("roster.txt", "a");
    // Declare/initialize input string
    char name[256] = {0};
    // While loop to get the right number of names
    while (num > 0)
    {
        // Declare/initialize output string
        char username[256] = {0};
        // Get user input
        printf("Enter the student's full name\n");
        scanf("%[^\n]255s", &name);
        fseek(stdin, 0, SEEK_END);
        // Convert to lower case
        for (int i = 0; name[i] != 0; i++)
        {
            name[i] = tolower(name[i]);
        }
        // For loop, split the string on spaces, continue grabbing the next chunk until no more are left
        char * tok = strtok(name, " ");
        for (int i = 0; tok != NULL; tok = strtok(NULL, " "), i++)
        {
            // If this wasn't the first iteration remove the extra characters added by the concatenation below
            // This is needed because we need the entire last string chunk but don't know when the last chunk is
            // Therefore we always add the entire remaining string and then remove when we find there was another chunk
            while (strlen(username) > i)
            {
                username[strlen(username) - 1] = 0;
            }
            strcat(username, tok);
        }
        // Put the output string and a newline to the txt file
        fputs(username, roster);
        fputs("\n", roster);
        // Decrement the loop
        num--;
    }
    // Close the file and end the program
    fclose(roster);
    line_by_line("roster.txt");
    return 0;
}

int main()
{
    //power_rangers();
    //fav_song();
    //copy_char();
    //copy_line();
    usernames();
    return 0;

}