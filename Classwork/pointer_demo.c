///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <ctype.h>

void convertToUppercase( char *sPtr )  // convert string to uppercase letters
{
   while ( *sPtr != '\0' ) { // current character is not '\0' 
      *sPtr = toupper( *sPtr ); // convert to uppercase
      ++sPtr; // make sPtr point to the next character
   } // end while
} // end function convertToUppercase

int demo_pointer2(){
// Converting a string to uppercase using a NON-constant pointer to NON-constant data.
    char string[] = "cHaRaCters and $32.98"; // initialize char array
    printf( "The string before conversion is: %s", string );
    convertToUppercase( string );
    printf( "\nThe string after conversion is: %s\n", string ); 
    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int my_print( const char *sPtr )
{
    for ( ; *sPtr != '\0'; ++sPtr ) { // no initialization   
      printf( "%c", *sPtr );
    }
}
int demo_point3 ( void )
{
    // Printing a string one character at a time using a non-constant pointer to constant data.
    // initialize char array
    char string[] = "print characters of a string"; 
    puts( "The string is:" );
    my_print( string );
    puts( "" );
    return 0;
} // end main


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Attempting to modify a constant pointer to constant data.
int demo_const_point( void )
{
    int x = 5; // initialize x
    int y; // define y
 
    // ptr is a constant pointer to a constant integer. ptr always points to the same location; the integer at that location cannot be modified

    const int *const ptr = &x;        // initialization is OK
    printf( "%d\n", *ptr );
    //*ptr = 7; // error: *ptr is const; cannot assign new value 
    //ptr = &y; // error: ptr is const; cannot assign new address
} // end main


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int demo_size( void )
{
    char c;           
    short s;         
    int i;       
    long l;         
    long long ll;         
    float f;        
    double d;         
    long double ld;   
    int array[ 20 ]; // create array of 20 int elements
    int *ptr = array; // create pointer to array

    printf( "     sizeof c = %u\tsizeof(char)  = %u"   
            "\n     sizeof s = %u\tsizeof(short) = %u"   
            "\n     sizeof i = %u\tsizeof(int) = %u"   
            "\n     sizeof l = %u\tsizeof(long) = %u"   
            "\n    sizeof ll = %u\tsizeof(long long) = %u"   
            "\n     sizeof f = %u\tsizeof(float) = %u"   
            "\n     sizeof d = %u\tsizeof(double) = %u"   
            "\n    sizeof ld = %u\tsizeof(long double) = %u"   
            "\n sizeof array = %u"   
            "\n   sizeof ptr = %u\n",    
            sizeof c, sizeof( char ), sizeof s, sizeof( short ), sizeof i,
            sizeof( int ), sizeof l, sizeof( long ), sizeof ll,           
            sizeof( long long ), sizeof f, sizeof( float ), sizeof d,     
            sizeof( double ), sizeof ld, sizeof( long double ),           
            sizeof (array), sizeof (ptr) );                
} // end main
/*      Output:
        sizeof c = 1       sizeof(char)  = 1
        sizeof s = 2       sizeof(short) = 2
        sizeof i = 4       sizeof(int) = 4
        sizeof l = 4       sizeof(long) = 4
        sizeof ll = 8      sizeof(long long) = 8
        sizeof f = 4       sizeof(float) = 4
        sizeof d = 8       sizeof(double) = 8
        sizeof ld = 12     sizeof(long double) = 12
        sizeof array = 80
        sizeof ptr = 4
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////






///////////////////////////////////////////////////////////////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////////////////////////////////////////////////////////





int main(){
    demo_size();
    return 0;
}