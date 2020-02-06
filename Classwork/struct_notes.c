#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Student90COS
{
    char student_initials[4];
    int student_number;
    struct Student90COS * next_node;
}node;

int demo1(void)
{
    node * MQT18_01_S1 = (node*)malloc(sizeof(node));  //head
    node * MQT18_01_S2 = (node*)malloc(sizeof(node));
    node * MQT18_01_S3 = (node*)malloc(sizeof(node));  //tail

    //head
    strcpy(MQT18_01_S1->student_initials, "LOL");
    MQT18_01_S1->student_number = 1;
    MQT18_01_S1->next_node = MQT18_01_S2;

    //node2
    strcpy(MQT18_01_S2->student_initials, "KAY");
    MQT18_01_S2->student_number = 2;
    MQT18_01_S2->next_node = MQT18_01_S3;

    //tail
    strcpy(MQT18_01_S3->student_initials, "YAY");
    MQT18_01_S3->student_number = 3;
    MQT18_01_S3->next_node = NULL;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Student90COS
{
    char student_initials[4];
    int student_number;
    struct Student90COS * next_node;
}node;

void spillList(node *n);


int demo2(void)
{
    node * MQT18_01_S1 = (node*)malloc(sizeof(node));  //head
    node * MQT18_01_S2 = (node*)malloc(sizeof(node));
    node * MQT18_01_S3 = (node*)malloc(sizeof(node));  //tail

    //head
    strcpy(MQT18_01_S1->student_initials, "LOL");
    MQT18_01_S1->student_number = 1;
    MQT18_01_S1->next_node = MQT18_01_S2;

    //node2
    strcpy(MQT18_01_S2->student_initials, "KAY");
    MQT18_01_S2->student_number = 2;
    MQT18_01_S2->next_node = MQT18_01_S3;

    //tail
    strcpy(MQT18_01_S3->student_initials, "YAY");
    MQT18_01_S3->student_number = 3;
    MQT18_01_S3->next_node = NULL;


    spillList(MQT18_01_S1);
}

// Prints out a list starting at node n
void spillList(node *n)
{
    while (n != NULL)
    {
        printf("%d: %s\n", n->student_number, n->student_initials);
        n = n->next_node;
    }
}

/////////////////////////////////////////////////////////////////////////////


#include<stdio.h>  
struct addr   
{  
    char town[20];  
    int num;  
    char tel[14];  
};  
struct employee  
{  
    char name[20];  
    struct addr add;  
};  
void nested_ex()  
{  
    struct employee emp;  
    printf("Enter employee DATA: \n");  
    scanf("%s %s %d %s",emp.name,emp.add.town, &emp.add.num, emp.add.tel);  
    printf("Printing the employee DATA....\n");  
    printf("name: %s\nTown: %s\nNumber: %d\nTelephone: %s",emp.name,emp.add.town,emp.add.num,emp.add.tel);  
} 


//////////////////////////////////////////////////////////////////////////////////////////


#include <stdlib.h>
#include <string.h>

 struct person {
    int age;
    char *name;
};

int basic(void) {
    // declare a new struct
    struct person mil;

    // set some data
    mil.age = 32;
    mil.name = malloc(6 * sizeof(char));
    strcpy(mil.name, "James");

    // create a pointer to struct
    struct person *mil_ptr = &mil;

    // set some data, again
    (*mil_ptr).age = 33;
    (*mil_ptr).name = realloc((*mil_ptr).name, 7 * sizeof(char));
    strcpy((*mil_ptr).name, "James!");

    // set some data, again, but with better syntax
    mil_ptr->age = 34;
    mil_ptr->name = realloc(mil_ptr->name, 8 * sizeof(char));
    strcpy(mil_ptr->name, "James!!");
}

//////////////////////////////////////////////////////////////////////////


#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char *name;
} person;

int type_struct(void) {
    // declare a new struct
    person em;

    // set some data
    em.age = 32;
    em.name = malloc(6 * sizeof(char));
    strcpy(em.name, "Brian");

    // create a pointer to struct
    person *em_ptr = &em;

    // set some data, again
    (*em_ptr).age = 33;
    (*em_ptr).name = realloc((*em_ptr).name, 7 * sizeof(char));
    strcpy((*em_ptr).name, "Brian!");

    // set some data, again, but with better syntax
    em_ptr->age = 34;
    em_ptr->name = realloc(em_ptr->name, 8 * sizeof(char));
    strcpy(em_ptr->name, "Brian!!");
}








/*
Struct

“String Splitter Test Struct”

* Define a struct to test split_the_string() from Performance Lab I.5.a-3
```c
char * split_the_string(char * string_ptr, char delimiter);
```
* Test input should include:
    * Input string
    * Delimiter
    * Expected return value
* Only Address Arithmetic is permitted
* Write one test to cover every requirement
* Print the human-readable results
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * split_the_string(char * string_ptr, char delimiter);
