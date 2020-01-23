#include <stdio.h>


int main()
{
    int this = 9;
    int that = 0;
    int * int_ptr;
    int_ptr = &this;
    that = *int_ptr;
    *int_ptr = 1;

    int house1 = TV;		// Integer variable "house1" defined as TV
    int house2 = CHAINSAW;		// Integer variable "house2" defined as CHAINSAW
    int * int_ptr;		// Pointer variable for an integer declared 
                /////////blank entry in the address book
    int_ptr = &house1;	// Defined with address of "house1"
                //////////filling in the blank entry with the address of house1
    house2 = *int_ptr;	// "house2" assigned value at int_ptr address
    /* "house2", now TV, should now equal "house1" */
                //////////go to house 1, clone TV of house1, and bring to house2 and replace CHAINSAW with clone of TV from house1 
    *int_ptr = "YOUR MOM";		// Value at int_ptr address assigned "YOUR MOM"
    /* "house1" is now equal to "YOUR MOM" */ 
                //////////go back to house1 and replace the TV with "YOUR MOM"


    return 0;
}