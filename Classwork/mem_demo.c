//DEMO LABS
//Demo functions
/*
/demonstration_labs/functions.c The purpose of this demo lab is to show off some functions that work on memory DEFINITIONS: (You should always have the documentation up for functions you do not know/or remember how they work) -strcpy(<char * destination>, <const char * source>) -Copies the C string pointed by into the array pointed by , including the terminating null character -strcmp(<const char * str1>, <const char * str2>) -This function starts comparing the first character of each string. If they are equal to each other, it continues with the following pairs until the characters differ or until a terminating null-character is reached. -malloc(<size_t size>) -Allocates a block of bytes of memory, returning a pointer to the beginning of the block. -memmove( <void * destination>, <const void * source>, <size_t num> ) -Copies the values of bytes from the location pointed by to the memory block pointed by . Copying takes place as if an intermediate buffer were used, allowing the destination and source to overlap. -memcpy( <void * destination>, <const void * source>, <size_t num> ) -Copies the values of bytes from the location pointed to by directly to the memory block pointed to by . -strstr(const char * str1, const char * str2) -Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.
*/
   
// TODO: Include needed headers
#include <stdio.h>  // For things such as printf
#include <string.h> // For things such as strcpy, memmove, etc
#include <stdlib.h> // For things such as malloc
int demo(void)
{
    char string[] = "Hello World";
    char substring[] = "World";
    char substring2[] = "Wo";
    // ============== malloc() ===============
    printf("\n\n========= malloc() =========\n");
    // TODO: Create a buffer large enough to fit the string length +1 of string using malloc()
    // NOTE: strlen only gives us the string length. The +1 is for the nul-terminator
    char *buffer = malloc(strlen(string) + 1);
    // TODO: Check that buffer was created, if not return 1
    if (!buffer)
    {
        return 1;
    }
    // ============== strcpy() ===============
    printf("\n\n========= strcpy() =========\n");
    // TODO: Using strcpy(), copy the string into the buffer
    strcpy(buffer, string);
    printf("Buffer is now: %s\n\n", buffer);
    printf("String is still: %s\n", string);
    // ============== strcmp() ===============
    printf("\n\n========= strcmp() =========\n");
    // TODO: Compare string to buffer. Print out match or not match depending on return
    if (strcmp(string, buffer) == 0)
    {
        printf("Match!\n");
    }
    else
    {
        printf("Not a match!\n");
    }
    // ============== memcpy() ===============
    printf("\n\n========= memcpy() =========\n");
    // TODO: Create a char buffer on the stack of size 50 and zeroize
    char stackBuffer[50] = {0};
    printf("String in buffer before memcpy: %s\n", stackBuffer);
    // TODO: Using memcpy, copy the string from string into the new buffer
    memcpy(stackBuffer, string, strlen(string) + 1);
    printf("String is: %s\n", string);
    printf("String in buffer after memcpy: %s\n",stackBuffer);
    // ============== memmove() ===============
    printf("\n\n========= memmove() =========\n");
    // TODO: Create another buffer on the stack size 50 and zeroize
    char stackBuffer2[50] = {0};
    printf("String in buffer before memmove: %s\n", stackBuffer2);
    // TODO: Using memove, move the original string into the new buffer
    memmove(stackBuffer2, string, strlen(string) + 1);
    printf("String is: %s\n", string);
    printf("String in buffer after memcpy: %s\n",stackBuffer2);

// NOTE
    /*
    Weird eh? It looks like memcpy and memmove do the same thing. Well... they do. But they don't.
    memcpy() cannot handle overlapping memory. memmove on the other hand can. SO while the example above has no issue...
    the upcoming example MAY have issues with memcpy
    */

    //memmove(&string[5], &string[6], 6);
    //printf("%s\n", string);

    // NOTE: Do you see what we did there? Our destination and source were the same. We started at \
    the address of the 6th element in string 'W' and overwrote the same memory we were just copying from \
    aka removing " World" and effectivly replacing it with "World"... in other words removing the space between \
    the two words.

    // ============== strstr() ===============
    printf("\n\n========= strstr() =========\n");
    // TODO: Let's grab a substring from the String

    // TODO: Using strstr, find the substring variable within the string...\
    assign this new pointer position to a char pointer called mark_position
    char *mark_position = strstr(string, substring);
    printf("%s", mark_position);

    // TODO: Free your heap buffers
    free(buffer);

    getchar();
    getchar();
    return 0;
}    
//Demo MALLOC_1
//Follow the instructions below. This is a step by step guide. USE THE MALLOC DOCUMENTATION!!!!!!!!!!! Seriously... USE IT

//TODO: Include needed headers
#include <stdio.h>          // For printf and such

#include <stdlib.h>         // For malloc()

int malloc1(void)
{
    //TODO: Declare a integer pointer
    // This var will point to a memory allocation and will store data
    // ... into that allocated memory
    int *integer_ptr;

    /* TODO Using malloc()... allocate a section of memory the sizeof int
    Set this memory block to type int. Set your int pointer to this malloc
    --In short, this allocates a section of memory that is the size of
    an integer... AKA 4 bytes. We then tell it that we will be storing an
    integer type within it using (int *). Thus, we can store one integer within
    this allocated memory space. Finally we asign the value in integer_ptr to
    the memory address the malloc returned (aka the first address of the allocated space)
    */
    integer_ptr = (int *)malloc(sizeof(int));


    // TODO: Ensure the pointer isn't NULL (Tell user there was an error and return if so)
    // If it's NULL, that means there wasn't enough space to allocate
    if (integer_ptr == 0)
    {
        printf("ERROR: Not enough memory!");
        return 1;
    }

    //TODO: Set the dereference of the int pointer to some integer value
    *integer_ptr = 20;

    //TODO: Print the dereferenced value of the integer pointer
    printf("The value is: %d\n", *integer_ptr);

    //TODO: Give back the memory space!!!!! This prevents buffer overflow and such
    free(integer_ptr);

    //TODO: NULL the pointer!!! This ensures we aren't pointing at garbage
    integer_ptr = NULL;

    return 0;

}
//Demo MALLOC_2
//Follow the instructions below. This is a step by step guide. USE THE MALLOC DOCUMENTATION!!!!!!!!!!! Seriously... USE IT

//TODO: Include needed headers
#include <stdio.h>          // For printf and such
#include <stdlib.h>         // For malloc()

int malloc2(void)
{
    //TODO: Declare a integer pointer
    // This var will point to a memory allocation and will store data
    // ... into that allocated memory
    int *pointer_one;

    /* TODO Using malloc()... allocate a section of memory that is
    large enough to hold an int array of 10 dimension
    */
    pointer_one = (int*)malloc(10 * sizeof(int));
    // In other words, enough space to hold 10 ints
    // TODO: Ensure the pointer isn't NULL (Tell user there was an error and return if so)
    // If it's NULL, that means there wasn't enough space to allocate
    if (pointer_one == 0)
    {
        printf("ERROR: Not enough memory!");
        return 1;
    }

    //TODO: Populate the array with some ints
    for (int i = 0; i < 10; i++)
    {
        pointer_one[i] = i * i;
    }

    //TODO: Print the array out
    for (int i = 0; i < 10; i++)
    {
        printf("pointer_one array[%d] = %d\n", i, pointer_one[i]);
    }

    //TODO: Give back the memory space!!!!! This prevents buffer overflow and such
    free(pointer_one);

    //TODO: NULL the pointer!!! This ensures we aren't pointing at garbage
    pointer_one = NULL;

    return 0;
}

int main()
{
    //demo();
    //malloc1();
    //malloc2();
    return 0;
}