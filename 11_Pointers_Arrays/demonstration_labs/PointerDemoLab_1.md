
# Program Illustrating Pointers

```c

#include <stdio.h>

int main (void)
{
     int   count = 10, x;
     int   *int_pointer;

     int_pointer = &count;
     x = *int_pointer;

     printf ("count = %i, x = %i\n", count, x);

     return 0;
}
```
Program  Output
```

count = 10, x = 10
```


##  The Address (&) Operator 
The &, or address operator, is a unary operator that returns the address of its operand.
For example, assuming the definitions
```c
int y = 5; int *yPtr;
```
the statement
```c
yPtr = &y;
```
![image](https://user-images.githubusercontent.com/47218880/67690237-8e413b00-f96a-11e9-9c9a-8ff034fe180d.png)


Pointer Representation in Memory Figure below shows the representation of the preceding
pointer in memory, assuming that integer variable y is stored at location 600000, and pointer variable yPtr is stored at loca-tion 500000. 
The operand of the address operator must be a variable; the address operator cannot be applied to constants or expressions.

![image](https://user-images.githubusercontent.com/47218880/67690380-c779ab00-f96a-11e9-88e1-2bd1db467d55.png)


## The Indirection (*) Operator 
The unary * operator, commonly referred to as the indirection operator or dereferencing operator, returns the value of the object to which its operand (i.e., a pointer) points. For example, the statement
```c
printf("%d", *yPtr); 
```
prints the value of variable y (5). Using * in this manner is called dereferencing a pointer.

## Demonstrating the & and * Operators 
Program below demonstrates the pointer operators & and *. The printf conversion specifier %p outputs the memory location as a hexadecimal integer on most platforms. In the program’s output, notice that the address of a and the value of aPtr are identical in the output, thus confirming that the ad-dress of a is indeed assigned to the pointer variable aPtr (line 8). The & and * operators are complements of one another—when they’re both applied consecutively to aPtr in ei-ther order (line 18), the same result is printed. The addresses shown in the output will vary across systems.

```c

// Using the & and * pointer operators.
#include <stdio.h>

int main( void )
{
   int a; // a is an integer
   int *aPtr; // aPtr is a pointer to an integer

   a = 7;
   aPtr = &a; // set aPtr to the address of a

   printf( "The address of a is %p"
           "\nThe value of aPtr is %p", &a, aPtr );

   printf( "\n\nThe value of a is %d"   
           "\nThe value of *aPtr is %d", a, *aPtr );

   printf( "\n\nShowing that * and & are complements of "
           "each other\n&*aPtr = %p"   
           "\n*&aPtr = %p\n", &*aPtr, *&aPtr );
} // end main
```
Program Output
```

The address of a is 0028FEC0 
The value of aPtr is 0028FEC0

The value of a is 7 
The value of *aPtr is 7

Showing that * and & are complements of each other
&*aPtr = 0028FEC0 
*&aPtr = 0028FEC0
```


## Pass-By-Value

```c
// Cube a variable using pass-by-value.
#include <stdio.h>

int cubeByValue( int n ); // prototype

int main( void )
{
   int number = 5; // initialize number

   printf( "The original value of number is %d", number );
   
   // pass number by value to cubeByValue
   number = cubeByValue( number );

   printf( "\nThe new value of number is %d\n", number );
} // end main

// calculate and return cube of integer argument                 
int cubeByValue( int n )                                            
{                                                                   
   return n * n * n; // cube local variable n and return result
} // end function cubeByValue    
```
Program Output
```

The original value of number is 5 
The new value of number is 125
```
## Pass-By-Reference 
```c
// Cube a variable using pass-by-reference with a pointer argument.

#include <stdio.h>

void cubeByReference( int *nPtr ); // function prototype

int main( void )
{
   int number = 5; // initialize number

   printf( "The original value of number is %d", number );
 
   // pass address of number to cubeByReference
   cubeByReference( &number );

   printf( "\nThe new value of number is %d\n", number );
} // end main

// calculate cube of *nPtr; actually modifies number in main
void cubeByReference( int *nPtr )                              
{                                                              
   *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr            
} // end function cubeByReference

```
## Program Output
```
The original value of number is 5 
The new value of number is 125
```
## Program 2  Converting a string to uppercase using a non-constant pointer to non-constant data.
```c
// Converting a string to uppercase using a 
// non-constant pointer to non-constant data.
#include <stdio.h>
#include <ctype.h>

void convertToUppercase( char *sPtr ); // prototype

int main( void )
{
   char string[] = "cHaRaCters and $32.98"; // initialize char array

   printf( "The string before conversion is: %s", string );
   convertToUppercase( string );
   printf( "\nThe string after conversion is: %s\n", string ); 
} // end main

// convert string to uppercase letters
void convertToUppercase( char *sPtr )
{
   while ( *sPtr != '\0' ) { // current character is not '\0' 
      *sPtr = toupper( *sPtr ); // convert to uppercase
      ++sPtr; // make sPtr point to the next character
   } // end while
} // end function convertToUppercase

```
Program Output
```
The string before conversion is: cHaRaCters and $32.98 
The string after conversion is: CHARACTERS AND $32.98

```

## Program 3 Printing a string one character at a time using a non-constant pointer to constant data.
```c
// Printing a string one character at a time using a non-constant pointer to constant data.

#include <stdio.h>

void printCharacters( const char *sPtr );

int main( void )
{
   // initialize char array
   char string[] = "print characters of a string"; 

   puts( "The string is:" );
   printCharacters( string );
   puts( "" );
} // end main

// sPtr cannot modify the character to which it points,
// i.e., sPtr is a "read-only" pointer
void printCharacters( const char *sPtr )
{
   // loop through entire string                            
   for ( ; *sPtr != '\0'; ++sPtr ) { // no initialization   
      printf( "%c", *sPtr );                                   
   } // end for                                             
} // end function printCharacters

```
Program Output
```
The string is:
print characters of a string

```
 ## Program below illustrates the attempt to compile a function that receives a non-constant
pointer (xPtr) to constant data. This function attempts to modify the data pointed to by xPtr in line 18—which results in a compilation error. 

```c
// Attempting to modify data through a 
// non-constant pointer to constant data.
#include <stdio.h>
void f( const int *xPtr ); // prototype

int main( void )
{
   int y; // define y

   f( &y ); // f attempts illegal modification
} // end main

// xPtr cannot be used to modify the 
// value of the variable to which it points
void f( const int *xPtr )
{
   *xPtr = 100; // error: cannot modify a const object
} // end function f
```

Program Output
```
error C2166: l-value specifies const object
```
The error shown is from the Visual C++ compiler. 
The actual error message you receive (in this and other examples) is com-piler specific—for example, 
Xcode’s LLVM compiler reports the error:
```
Read-only variable is not assignable" 
```
and the GNU gcc compiler reports the error:
```
error: assignment of read-only location ‘*xPtr’

```
## Program  Attempting to modify a constant pointer to non-constant data.

```c
// Attempting to modify a constant pointer to non-constant data.
#include <stdio.h>

int main( void )
{
   int x; // define x
   int y; // define y

   // ptr is a constant pointer to an integer that can be modified     
   // through ptr, but ptr always points to the same memory location
   int * const ptr = &x;                                               

   *ptr = 7; // allowed: *ptr is not const
   ptr = &y; // error: ptr is const; cannot assign new address
} // end main

```
## Program  Attempting to modify a constant pointer to constant data.
```c
// Attempting to modify a constant pointer to constant data.
#include <stdio.h>

int main( void )
{
   int x = 5; // initialize x
   int y; // define y

   // ptr is a constant pointer to a constant integer. ptr always 
   // points to the same location; the integer at that location
   // cannot be modified
   const int *const ptr = &x; // initialization is OK
                                 
   printf( "%d\n", *ptr );
   *ptr = 7; // error: *ptr is const; cannot assign new value 
   ptr = &y; // error: ptr is const; cannot assign new address
} // end main
```
## Program Applying sizeof to an array name returns the number of bytes in the array
```c
// Applying sizeof to an array name returns the number of bytes in the array.
#include <stdio.h>
#define SIZE 20

size_t getSize( float *ptr ); // prototype

int main( void )
{
   float array[ SIZE ]; // create array

   printf( "The number of bytes in the array is %u"            
           "\nThe number of bytes returned by getSize is %u\n",
           sizeof( array ), getSize( array ) );                
} // end main

// return size of ptr
size_t getSize( float *ptr )
{
   return sizeof( ptr );
} // end function getSize

```
Program Output
```
The number of bytes in the array is 80 
The number of bytes returned by getSize is 4
```
## Program Using operator sizeof to determine standard data type sizes.
```c
// Using operator sizeof to determine standard data type sizes.
#include <stdio.h>

int main( void )
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
          sizeof array, sizeof ptr );                                   
} // end main

```
Program output

![image](https://user-images.githubusercontent.com/47218880/67699386-0b27e100-f97a-11e9-9cb7-dc71dc39f174.png)

## Program Using indexing and pointer notations with arrays. 
```c 
// Using subscripting and pointer notations with arrays.
#include <stdio.h>
#define ARRAY_SIZE 4

int main( void )
{
   int b[] = { 10, 20, 30, 40 }; // create and initialize array b
   int *bPtr = b; // create bPtr and point it to array b
   size_t i; // counter
   size_t offset; // counter

   // output array b using array subscript notation
   puts( "Array b printed with:\nArray subscript notation" );

   // loop through array b
   for ( i = 0; i < ARRAY_SIZE; ++i ) {
      printf( "b[ %u ] = %d\n", i, b[ i ] );
   } // end for

   // output array b using array name and pointer/offset notation
   puts( "\nPointer/offset notation where\nthe pointer is the array name" );

   // loop through array b
   for ( offset = 0; offset < ARRAY_SIZE; ++offset ) {
      printf( "*( b + %u ) = %d\n", offset, *( b + offset ) );  
   } // end for

   // output array b using bPtr and array subscript notation
   puts( "\nPointer subscript notation" );

   // loop through array b
   for ( i = 0; i < ARRAY_SIZE; ++i ) {
      printf( "bPtr[ %u ] = %d\n", i, bPtr[ i ] );
   } // end for

   // output array b using bPtr and pointer/offset notation
   puts( "\nPointer/offset notation" );

   // loop through array b
   for ( offset = 0; offset < ARRAY_SIZE; ++offset ) {
      printf( "*( bPtr + %u ) = %d\n", offset, *( bPtr + offset ) );   
   } // end for
} // end main
```
Program Output

![image](https://user-images.githubusercontent.com/47218880/67699825-c6507a00-f97a-11e9-98a7-d89e8488faa0.png)

## Program Copying a string using array notation and pointer notation
```c
// Copying a string using array notation and pointer notation.
#include <stdio.h>
#define SIZE 10

void copy1( char * const s1, const char * const s2 ); // prototype
void copy2( char *s1, const char *s2 ); // prototype

int main( void )
{
   char string1[ SIZE ]; // create array string1
   char *string2 = "Hello"; // create a pointer to a string
   char string3[ SIZE ]; // create array string3
   char string4[] = "Good Bye"; // create a pointer to a string

   copy1( string1, string2 );
   printf( "string1 = %s\n", string1 );

   copy2( string3, string4 );
   printf( "string3 = %s\n", string3 );
} // end main

// copy s2 to s1 using array notation
void copy1( char * const s1, const char * const s2 )
{
   size_t i; // counter

   // loop through strings
   for ( i = 0; ( s1[ i ] = s2[ i ] ) != '\0'; ++i ) {
      ; // do nothing in body                      
   } // end for                                    
} // end function copy1

// copy s2 to s1 using pointer notation
void copy2( char *s1, const char *s2 )
{
   // loop through strings
   for ( ; ( *s1 = *s2 ) != '\0'; ++s1, ++s2 ) {
      ; // do nothing in body                
   } // end for                              
} // end function copy2


```
Program Output
```
string1 = Hello 
string3 = Good Bye

```



