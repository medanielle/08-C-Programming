#include<stdio.h>
/////////////////         DEFINITIONS              /////////////////////

    /*
        The terms below are important to remember because compiler errors may be specific enough and reference one of the terms below.

        Operand
            Values, variables or expressions which are used to evaluate an expression (e.g., 3.14, studentNumber, i)
        Operator
            A symbol which operates on a value or variable (e.g., +, =, >, |, &&)
        Expression
            A combination of operators and operands (e.g., b+c, i++, !pointer)
    */

/////////////////          Practice               /////////////////////

    /*
        Expression	            # Operands?	        # Operators?
        numStu * numClass       	2                	1
        stuGPA >= avgGPA        	2                	1
        a = b + c               	3                	2
        remainder = (num % 2) + 1	4                	4   ****** do () count?
        (4*a*c+b*b)/(2*a)       	7                	10
    */


/////////////////          Increment/Decrement               /////////////////////
int inc_decr()
{
    int x = 5; int y = 3;

    //////// INCREMENT ////////
    printf("x: %d => ", x);       // Result: 5; x = 5 + 1
    x++;
    printf("x++: %d\n", x);
    printf("y: %d => ", y);       // y = 3 + 1; Result: 4
    ++y;
    printf("++y: %d\n", y);
    printf("x: %d => ", x);       // x = 6 + 1; Result: 7
    ++x;
    printf("++x: %d\n", x);
    x = 5; y = 3;                               // Reset variables

    //////// DECREMENT ////////
    //printf("y: %d => --y: %d\n", y, --y);                          // y = 3 - 1; Result: 2
    //printf("x: %d => --x: %d\n", x, --x);                          // y = 5 - 1; Result: 4
    //printf("y: %d => y--: %d\n", y, y--);                          // Result: 4; y = 4 - 1
    return 0;
}
int arithmetic()
{
    int x = 7;
    int y = 4;
    float z = 0;
    //////// WRITE EACH RESULT ////////
    printf("x(%d) * y(%d) = %d\n", x, y, x*y);
    z = (float)x / y;
    printf("x(%d) / y(%d) = %f\n", x, y, z);
    printf("x(%d) %% y(%d) = %d\n", x, y, x%y); 
    printf("y(%d) + x(%d) = %d\n", y, x, y+x); 
    printf("y(%d) - x(%d) = %d\n", y, x, y-x);
    //-y
    printf("y: %d => -y: %d\n", y, -y);
    //x++
    printf("x: %d => ", x);       
    x++;
    printf("x++: %d\n", x);
    //y++
    printf("y: %d => ", y);       
    y++;
    printf("y++: %d\n", y); 
    //x--
    printf("x: %d => ", x);       
    x--;
    printf("x--: %d\n", x);
    //--y
    printf("y: %d => ", y);       // y = 3 + 1; Result: 4
    --y;
    printf("--y: %d\n", y);
    printf("1 + 2 * (3 + y(%d)) + 5 = %d\n", y, 1 + 2 * (3 + y) + 5);
    return 0;
}
int relational(){
///////////// ********** Relational Operators *********** /////////////////

        int x = 2;
        int y = 6;
//////// WRITE EACH RESULT ////////
        printf("y(%d) < x(%d) = False(%d)\n", y, x, y<x);
        printf("y(%d) <= x(%d) = (%d)\n", y, x, y<=x);
        printf("y(%d) > x(%d) = (%d)\n", y, x, y>x);
        printf("y(%d) >= x(%d) = (%d)\n", y, x, y>=x);
        printf("y(%d) == x(%d) = (%d)\n", y, x, y==x);
        printf("y(%d) != x(%d) = (%d)\n", y, x, y!=x);
        printf("2 == y(%d) = (%d)\n", y, 2==y);
        printf("6 != x(%d) = (%d)\n", x, 6!=x);
        printf("6 >= 2 = (%d)\n", 6>=2);
        printf("2 < 6 = (%d)\n", 2<6);
        printf("x(%d) != y(%d) != 3 >= x(%d)  => (%d)\n", x,y,x, x!=y!=3>=x);            // Bonus
        //x(2) != y(6) != 3 >= x(2) 
        //x(2) != y(6)  = 1(True)
        //3 >= x(2)  =  1(True)
        //1(True) != 1(True) = (0)False

        return 0;
}
int logical()
{
    /////////// ********  Logical Operators Quiz  ********** ////////////
    int x = 99;
    int y = 0;

    //////// WRITE EACH RESULT ////////
    printf("x(%d) && y(%d)  =>  (%d)\n",x, y, x && y);
    printf("y(%d) || x(%d)  =>  (%d)\n",y, x, y || x);
    printf("!y(%d)  =>  (%d)\n",y, !y);
    printf("y(%d) && 0  =>  (%d)\n",y ,y && 0);
    printf("x(%d) || 42  =>  (%d)\n",x, x || 42);
    printf("!x(%d)  =>  (%d)\n",x,!x);
    printf("x(%d) && x(%d)  =>  (%d)\n",x, x, x && x);
    printf("y(%d) || y(%d)  =>  (%d)\n",y, y, y || y);
    printf("!1  =>  (%d)\n",!1);
    printf("1 && 1  =>  (%d)\n",1 && 1);
    printf("(0 && 1) || (2 && 3)  =>  (%d)",(0 && 1) || (2 && 3));        // Bonus
}

int assignment(){
        ///////////// ********** Assignment Operators *********** /////////////////

    int x = 9; int y = 3;
        //////// WRITE EACH VALUE OF X ////////

    printf("x(%d) *= y(%d) => (%d) \n", x, y, x *= y);      // => 3*9 = 27
    x = 9; y = 3;
    printf("x(%d) /= y(%d)  =>  (%d) \n", x, y, x /= y);       // => 9/3 = 3
    x = 9; y = 3;
    printf("x(%d) %%= y(%d)  =>  (%d) \n", x, y, x %= y);    // => 9%3 = 0
    x = 9; y = 3;
    printf("x(%d) += y(%d)  =>  (%d) \n", x, y, x += y);       // => 9+3 = 12
    x = 9; y = 3;
    printf("x(%d) -= y(%d)  =>  (%d) \n", x, y, x -= y);       // => 9-3 = 6
    x = 9; y = 3;
    printf("x(%d) *= ++y(%d)  =>  (%d) \n", x, y, x *= ++y);     // => 9 * (3+1) = 36
    x = 9; y = 3;
    printf("x(%d) /= y--(%d)  =>  (%d) \n", x, y, x /= y--);     // => 9 / (3-1) = 4.5?????   x(9) /= y--(2)  =>  (3)
    x = 9; y = 3;
    printf("x(%d) %%= --x(%d)  =>  (%d) \n", x, x, x %= --x);     // => 9 %(9-1) = 1??????   x(9) %= --x(8)  =>  (0)
    x = 9; y = 3;
    printf("x(%d) += --y(%d)  =>  (%d) \n", x, y, x += --y);     // => 9 + (3-1) = 11   
    x = 9; y = 3;
    printf("x(%d) -= y++(%d)  =>  (%d) \n", x, y, x -= y++);     // => 9 - (3+1) = 5   ??????    x(9) -= y++(4)  =>  (6)
    x = 9; y = 3;
    printf("(y(%d) %%= y(%d)) || (x(%d) /= x--(%d))  =>  (%d) \n", y, y, x, x, (y %= y) || (x /= x--));        // Bonus
    // (3 % 3 = 0) || (9 / (9-1) = 1)  = True

        
}
    /*
    //////// ARITHMETIC OPERATOR QUIZ BONUS QUESTION ////////
        int y = 4;
        1 + 2 * (3 + y) + 5;        // Result 20
        1 + 2*(7) +5 = 1+14+5 = 20

    //////// RELATIONAL OPERATOR QUIZ BONUS QUESTION ////////
        int x = 2; y = 6;
        x != y != 3 >= x;          // Result 0
        2 != 6 != 3 >= 2
        1(true) >= 2  = False(0)


    //////// ASSIGNMENT OPERATOR QUIZ BONUS QUESTION ////////
        x = 9; y = 3;
        (y %= y) || (x /= x--);    // Result 0
        3%3 OR 9/(9-1)
        0 OR 1  = True

    // What would be a better way of writing these?
        */
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
int lab9()
{
    /*
    Lab 9: Operators and Expression

        1. Write a program to calculate the hypotenuse of a right triangle
        2. Use the Pythagorean Theorem (a^2 + b^2 = c^2)
        3. Input the two legs (A and B)
        4. Output the hypotenuse (C)
        5. Add this to your code "shell"
            #include <math.h> // Math header contains sqrt()
            NOTE: gcc may require a -lm flag. This tells gcc to link a library (-l), specifically the math library (-m).
            #include <math.h>
            double sqrt(double x);

            /* Returns the nonnegative square root of x as double */
            /* Returns NaN (Not a number) on most errors */
    double a, b, c;
    printf("Enter side A: ");
    scanf("%lf", &a);
    printf("Enter side B: ");
    scanf("%lf", &b);
    printf("Side A: %lf, Side B: %lf\n", a, b);

            /*
    Relational
        1. Write a relational expression to appropriately test the user input for leg A and then for leg B
    Logical
        1. Combine the previous Relational expressions with a logical operator so that both must be True
    Error Checking
        1. Include the Arithmetic, Relational and Logical code in this shell code as indicated by /* insert here */


    if (a > 0 && b > 0 && a ){
        c = sqrt((a*a)+(b*b));
        printf("The hypontenus is %.2lf", c);
        }
    return 0;
}
int main()
{
    //inc_decr();
    //arithmetic();
    //lab9();
    //relational();
    //logical();
    assignment();
    return 0;
}