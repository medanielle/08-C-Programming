#include <stdlib.h>
#include <string.h>

 struct person {
    int age;
    char *name;
};

int main(void) {
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