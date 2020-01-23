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


void swap_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}
int pass_value(void)
{
    int x = 9; int y = 0;
    printf("x = %d\ny = %d\n", x, y);
    swap_value(x, y);
    printf("x = %d\ny = %d\n", x, y);
    return 0;
}
void swap_ref(int * a, int * b)
{
    int temp = *a;                           //x = 9
    *a = *b;                                 //y = 0
    *b = temp;                               //x = 0
    return;                                  //y = 9
}
int pass_ref(void)
{
    int x = 9; int y = 0;
    printf("x = %d\ny = %d\n", x, y);
    swap_ref(&x, &y);
    printf("x = %d\ny = %d\n", x, y);
    return 0;
}




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ERROR_CODE ((double)98245.1653)

//addition function
double add(double firstNumber, double secondNumber)
{
	return firstNumber + secondNumber;
}

//subtraction function
double subtract(double firstNumber, double secondNumber)
{
	return firstNumber - secondNumber;
}
//mulipication function
double multiply(double firstNumber, double secondNumber)
{
	return firstNumber * secondNumber;
}
//dividion function
double divide(double firstNumber, double secondNumber)
{  // use if else to check for 0 or null before dividing
	if (secondNumber)
	{
		return firstNumber / secondNumber;
	}
	else
	{
		printf("Eek! A ZERO!\n");
		return ERROR_CODE;
	}
}

int calc(void)
{
    // declare pointer to a funtion variable
	double(*mathFun_ptr)(double x, double y);
    // declare all variables
	double num1 = 0, num2 = 0, returnValue = 0;
	char mathOperator = 0; 

    // display format and get input from user  (flush buffer/streams before getting input)
	printf("Enter two ints and/or doubles separated by a math operator\n");
	printf("e.g., 1.2 + 3.4, 5.6 - 7.8, 9.10 * 2.3, 4.5 / 6.7\n");
	_flushall();
	scanf("%lf %c %lf", &num1, &mathOperator, &num2);
	
    // check for each available operator and set the corresponding function. Throw an error if none match.
	if (mathOperator == '+')
	{
		mathFun_ptr = &add;
	}
	else if (mathOperator == '-')
	{
		mathFun_ptr = &subtract;
	}
	else if (mathOperator == '*')
	{
		mathFun_ptr = &multiply;
	}
	else if (mathOperator == '/')
	{
		mathFun_ptr = &divide;
	}
	else
	{
		puts("Something went wrong!");
		return -1;
	}
	// if a value was given to mathPtr
	if (mathFun_ptr)
	{
        //run function and print output
		returnValue = mathFun_ptr(num1, num2);
		printf("The result is:\t%lf\n", returnValue);
	}
    // Otherwise, give an error 
	else
	{
		puts("Something went wrong!");
		return -1;
	}
    // clear the stream - good practice  - makes you hit enter to leave to program...
	//getchar(); getchar();
	return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Define each of the following function prototypes IAW their associated comment blocks:
//     int low_to_high_compare(int x, int y)
//     int high_to_low_compare(int x, int y)
//     int absolute_low_to_high_compare(int x, int y)
//     int absolute_high_to_low_compare(int x, int y)
// Write eight (8) tests for bubble_sort() (see: the comment block below), two tests for each of the function
//     prototypes listed above. 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

#ifndef TRUE
#define TRUE ((int)1)
#endif

#ifndef FALSE
#define FALSE ((int)0)
#endif
//... go to PointerPerfLab1


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int double_pointer() {
    int var = 100;

    // pointer... will assign to var's address
    int *ptr;

    // This ill be the double pointer... that points to ptr
    int **dblPtr;

    // Store address of var into ptr
    ptr = &var;

    // Store address of ptr into dblPtr
    dblPtr = &ptr;

    printf("Value of var %d\n", var);
    printf("Addr of var %p\n", &var);
    printf("Value of var using ptr %d\n", *ptr);
    printf("Addr of var using ptr %p\n", &ptr);
    printf("Addr of var using ptr %p\n", &*ptr);
    printf("Value of var using double pointer %d\n", **dblPtr);
    printf("Addr of var using double pointer %p\n", **dblPtr);
    printf("Addr of var using double pointer %p\n", &**dblPtr);

    //
    //printf("Value of var using double pointer %d\n", **dblPtr);

    return 0;
}
/*      OUTPUT:

Value of var 100
Addr of var 0061FF08
Value of var using ptr 100
Addr of var using ptr 0061FF04              // &ptr
Addr of var using ptr 0061FF08              // &*ptr
Value of var using double pointer 100
Addr of var using double pointer 00000064   // **dblPtr
Addr of var using double pointer 0061FF08   // &**dblPtr

*/
int main(){
    //demo_size();
    //pass_value();
    //printf("-------------------\n");
    //pass_ref();
    // calc();
    double_pointer();

    return 0;
}