#include <stdio.h>

int first()
{
    char questionMark = 63;                  // A question mark
    char *nickName[] = {"Gilligan\0"};      // A nickname

    printf("Who is %s%c \n", *nickName, questionMark);      //Who is Gilligan?
    printf("%s is. \n", *nickName);                         //Gilligan is.


    return 0;
}
int precision_printf()
{
    float someNum = 12.3456;                    // Var used as comparison
//Precision (Numeric): %[flags][field width][.precision]specifier
    printf("%f\n", someNum);                      // 12.345600
    printf("%.0f\n", someNum);                    // 12
    printf("%.2f\n", someNum);                    // 12.35
    printf("%.3f\n", someNum);                    // 12.346
    printf("%.6f\n", someNum);                    // 12.345600
    printf("%.20f\n", someNum);                   // 12.34560012817382800000*
    //* Your specific output my differ considering printf has exceeded the bounds of your float and is printing garbage

//(Precision)Strings:  %[flags][field width][.precision]specifier

    char myStr[] = {"Hello world!"};            // dimension 13 and is nul-terminated

    printf("%s\n", myStr);                        // Hello world!
    printf("%.12s\n", myStr);                     // Hello world!
    printf("%.11s\n", myStr);                     // Hello world
    printf("%.5s\n", myStr);                      // Hello
    printf("%.0s\n", myStr);                      //
    printf("%.1000s\n", myStr);                   // Hello world!
    return 0;
}
int field_width()
{
    //Field Width :%[flags][field width][.precision]specifier

    float someNum = 12.3456;                    // Var used as comparison

    printf("%f\n", someNum);                     // 12.345600
    printf("%0f\n", someNum);                    // 12.345600
    printf("%2f\n", someNum);                    // 12.345600
    printf("%4f\n", someNum);                    // 12.346000
    printf("%8f\n", someNum);                    // 12.345600
    printf("%16f\n", someNum);                   //         12.345600                (8 positions)
    printf("%25f\n", someNum);                   //                  12.345600       (17 positions)

    char myStr[] = {"Hello world!"};            // Nul terminated string

    printf("%s\n", myStr);                        // Hello world!
    printf("%0s\n", myStr);                       // Hello world!
    printf("%2s\n", myStr);                       // Hello world!
    printf("%4s\n", myStr);                       // Hello world!
    printf("%8s\n", myStr);                       // Hello world!
    printf("%16s\n", myStr);                      //      Hello World!            (5 positions)
    printf("%26s\n", myStr);                      //                Hello world!  (15 positions)
    return 0;
}

int flags_printf()
{
    //Flags: %[flags][field width][.precision]specifier
    /*
        Flags consist of one or more of the following characters:
        +               Prefixed to positive numbers
        ' ' (space)     Prefixed to positive numbers
        -               Output is left-justified within field width
        0               Field is filled with leading zeros
        #               Alternate conversion rules
    */
    float someNum = 12.3456;                    // Var used as comparison

    printf("%f\n", someNum);                     // 12.345600
    printf("%f\n", someNum * -1.0);              // -12.345600
    printf("%+f\n", someNum);                    // +12.345600
    printf("%+f\n", someNum * -1.0);             // -12.346000
    printf("% f\n", someNum);                    //  12.345600
    printf("% f\n", someNum * -1.0);             // -12.345600    
    //use to left justify after adding padding with field width
    printf("%-f\n", someNum);                    // 12.345600  
    printf("%-f\n", someNum * -1.0);             // -12.345600  
    printf("%0f\n", someNum);                    // 12.345600  
    printf("%016f\n", someNum);                  // 000000012.345600
    return 0;
}

int formatting_demo()
{
    //////////////////////////////////////
    //// WRITE OUT THE EXPECTED OUTPUT////
    //////////////////////////////////////

    printf("%f\n", 1.2);                              // 1.200000
    printf("%+8.4f\n", -1.79888);                       //  -1.7980
    printf("% 7.2f\n", 0.987654321);                  //    0.98
                                                      //    0.99        ************
    printf("%-6.1f is yours\n", 13.37);               // 0013.3 is yours
                                                      // 13.4   is yours
    printf("Yours is %05.2f\n", 1.2345);              // Yours is 01.23
    printf("%s\n", "Hello World!\0");                 // Hello World!
    printf("%9.5s\n", "Hello world!\0");              // 0000Hello
                                                      //     Hello        ***********
    printf("%016.11s\n", "Hello world!\0");           // 00000Hello world
    return 0;

}

int main()
{
    //first();
    //precision_printf();
    //field_width();
    //flags_printf();
    formatting_demo();
}