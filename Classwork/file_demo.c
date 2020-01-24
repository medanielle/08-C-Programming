#include <stdio.h>


int create_seq_file( void )
{ 
   unsigned int account; // account number
   char name[ 30 ]; // account name
   double balance; // account balance
   FILE *cfPtr; // cfPtr = clients.dat file pointer   
   // fopen opens file. Exit program if unable to create file 
   if ( ( cfPtr = fopen( "clients.dat", "w" ) ) == NULL ) {
      puts( "File could not be opened" );
   } // end if
   else { 
      puts( "Enter the account, name, and balance." );
      puts( "Enter EOF to end input." );
      printf( "%s", "? " );
      scanf( "%d%29s%lf", &account, name, &balance );
      // write account, name and balance into file with fprintf
      while ( !feof( stdin ) ) { 
         fprintf( cfPtr, "%d %s %.2f\n", account, name, balance );
         printf( "%s", "? " );
         scanf( "%d%29s%lf", &account, name, &balance );
      } // end while
      
      fclose( cfPtr ); // fclose closes file   
   } // end else
} // end main


// Reading and printing a sequential file
#include <stdio.h>
int read_print_file( void )
{ 
   unsigned int account; // account number
   char name[ 30 ]; // account name
   double balance; // account balance

   FILE *cfPtr; // cfPtr = clients.dat file pointer

   // fopen opens file; exits program if file cannot be opened 
   if ( ( cfPtr = fopen( "clients.dat", "r" ) ) == NULL ) {
      puts( "File could not be opened" );
   } // end if

   else { // read account, name and balance from file
      printf( "%-10s%-13s%s\n", "Account", "Name", "Balance" );
      fscanf( cfPtr, "%d%29s%lf", &account, name, &balance );

      // while not end of file
      while ( !feof( cfPtr ) ) { 
         printf( "%-10d%-13s%7.2f\n", account, name, balance );
         fscanf( cfPtr, "%d%29s%lf", &account, name, &balance );

      } // end while

      fclose( cfPtr ); // fclose closes the file   
   } // end else
} // end main


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
int append_file(void)
{
    FILE *fp;
    char words[MAX];
    if ((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stdout,"Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");
    while ((fscanf(stdin,"%40s", words) == 1)  && (words[0] != '#'))
        fprintf(fp, "%s\n", words);
    puts("File contents:");
    rewind(fp);           /* go back to beginning of file */
    while (fscanf(fp,"%s",words) == 1)
        puts(words);
    puts("Done!");
    if (fclose(fp) != 0)
        fprintf(stderr,"Error closing file\n");
    return 0;
}


int char_by_char(void)
{
    FILE * myFile_ptr = fopen("read-file.txt", "r"); // Opens a read-only file
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

int line_by_line(void)
{
    FILE * myFile_ptr = fopen("read-file.txt", "r"); // Opens a read-only file
    char tempBuff[256] = { 0 };	// Temporary buffer to store read lines
    char * tempReturnValue = tempBuff; // Holds fgets() return value
    if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
    {
        while (tempReturnValue) // Continue reading until return value is NULL
        {
            tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
            if (tempReturnValue) 	// If EOF hasn’t been reached…
            {
                puts(tempBuff);	// …print the buffer
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

int demo_funk(){
    #define _CRT_SECURE_NO_WARNINGS 1
    #include <stdio.h>
	FILE * myFile_ptr = fopen("CCCP.txt", "r"); // Opens a read-only file
	char readFromFile = 0; // Store char-by-char input from myFile_ptr
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (readFromFile != EOF) // Continue reading until the end of file
		{
			readFromFile = getc(myFile_ptr); 	// Read one character
			putc(readFromFile, stdout); 		// Print that character
		}
		fclose(myFile_ptr); // Always fclose anything you fopen
		system("start https://youtu.be/YgGzAKP_HuM"); //*************************************?
	}
	else 			// Otherwise, fopen() failed
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}
	getchar(); getchar();
	return 0;
}


int main(){
    //create_seq_file();
    //read_print_file();
    //line_by_line();
    //char_by_char();
    return 0;
}