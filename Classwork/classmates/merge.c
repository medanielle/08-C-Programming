#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

#define SWAP(type, a_, b_) \
do { \
    struct { type *a; type *b; type t; } SWAP; \
    SWAP.a  = &(a_); \
    SWAP.b  = &(b_); \
    SWAP.t  = *SWAP.a; \
    *SWAP.a = *SWAP.b; \
    *SWAP.b = SWAP.t; \
} while (0)

typedef struct node
{
    char first[MAX];
    char last[MAX];
    struct node *next;
    struct node *prev;
} node;

typedef struct list
{
    node *head;
    node *tail;
} list;

void printList(list *list1)
{
    // Traverses the entire list and prints out the data of each node
    node *ptr = list1->head;
    while (ptr != NULL)
    {
        printf("%s, %s -> ", ptr->last, ptr->first);
        ptr = ptr->next;
    }
    printf(" End\n");
}

void prepend(char* firstname, char* lastname, list *list1)
{
    // Adds a node to the beginning of the list
    node *link = (node*) malloc(sizeof(node));
    
    strcpy(link->last, lastname);
    strcpy(link->first, firstname);
    link->next = list1->head;
    link->prev = NULL;
    if (list1->tail == NULL)
    {
        (*list1).tail = link;
    }
    else
    {
        (*list1).head->prev = link;
    }
    (*list1).head = link;
}

void append(char* firstname, char* lastname, list *list1)
{
    // Adds a node to the end of the list
    if (list1->head == NULL)
    {
        prepend(firstname, lastname, list1);
    }
    else
    {
        node *link = (node*) malloc(sizeof(node));
        strcpy(link->last, lastname);
        strcpy(link->first, firstname);
        link->next = NULL;
        (*list1).tail->next = link;
        link->prev = list1->tail;
        (*list1).tail = link;
    }
}

int find(char* key, list *list1)
{
    // Searches the list for the given key and returns the index or -1 if not found
    node *curr = list1->head;
    int index = 0;
    while (curr != NULL && strcmp(curr->last, key) != 0)
    {
        curr = curr->next;
        index++;
    }
    if (curr != NULL)
    {
        return index;
    }
    return -1;
}

void remove_item(char* key, list *list1)
{
    // Traverses the list and removes the first found instance of the given key
    if (list1->head->last == key)
    {
        (*list1).head = list1->head->next;
        if (list1->head == NULL)
        {
            (*list1).tail = NULL;
        }
        else
        {
            (*list1).head->prev = NULL;
        }
    }
    else
    {
        node *curr = list1->head;
        node *prev = NULL;
        while (curr != NULL && strcmp(curr->last, key) != 0)
        {
            prev = curr;
            curr = curr->next;
        }
        if (curr != NULL)
        {
            prev->next = curr->next;
            if (curr == list1->tail)
            {
                (*list1).tail = prev;
            }
            else
            {
                prev->next->prev = prev;
            }
        }
        else
        {
            printf("Did not find an element with data %d\n", key);
        }
    }
}
/*
void swap(node* first, node* second)
{
    // swaps the values in the specified nodes
    char temp[256];
    strcpy(temp, first->data);
    strcpy(first->data, second->data);
    strcpy(second->data, temp);
}*/
/*
int isBigger(char* first, char* second)
{
    // recursive function to check which string is bigger
    // should have just used strcmp now that i know it isn't just true/false
    if (*first > *second)
    {
        return 1;
    }
    else if (*first < *second)
    {
        return 0;
    }
    else
    {
        if (*(first+1) == 0)
        {
            return 1;
        }
        else if (*(second+1) == 0)
        {
            return 0;
        }
        else
        {
            return isBigger(first+1, second+1);
        }
    }
}
*/
void sort(list *list1)
{
    // bubble sorts the items in the given linked list
    node* i = list1->head;
    while (i->next != NULL)
    {
        node* j = list1->head;
        while (j->next != NULL)
        {
            if (strcmp(j->last, j->next->last)> 0)
            {
                SWAP(struct node *, j, j->next);
            }
            j = j->next;
        }
        i = i->next;
    }
}

int count(char* key, list *list1)
{
    // Traverses the list and returns a count of the nodes with the given data
    node *curr = list1->head;
    int count = 0;
    while (curr != NULL)
    {
        if (strcmp(curr->last, key) == 0)
        {
            count++;
        }
        curr = curr->next;
    }
    return count;
}

void merge(list *list1, list *list2)
{
    // merges the two lists together, removing all duplicates, then calls the sort function before finally writing the results to a file
    list merged = {NULL, NULL};
    node *curr = list1->head;
    while (curr != NULL)
    {
        if (count(curr->last, list1) > 1)
        {
            node *temp = curr->next;
            remove_item(curr->last, list1);
            curr = temp;
        }
        else
        {
            while (find(curr->last, list2) > -1)
            {
                remove_item(curr->last, list2);
            }
            append(curr->last, curr->first, &merged);
            curr = curr->next;
        }
    }
    curr = list2->head;
    while (curr != NULL)
    {
        if (count(curr->last, list2) > 1)
        {
            node *temp = curr->next;
            remove_item(curr->last, list2);
            curr = temp;
        }
        else
        {
            while (find(curr->last, list1) > -1)
            {
                remove_item(curr->last, list1);
            }
            append(curr->last, curr->first, &merged);
            curr = curr->next;
        }
    }
    sort(&merged);
    FILE * file_ptr3 = fopen("names3.txt", "w");
    if (file_ptr3 == NULL)
    {
        printf("Couldn't open at least one file");
        return;
    }
    curr = merged.head;
    while (curr != NULL)
    {
        fputs(curr->last, file_ptr3);
        curr = curr->next;
    }
    fclose(file_ptr3);
}

int main(void)
{
    // set up the lists
    list list1 = {NULL, NULL};
    list list2 = {NULL, NULL};
    // open the files
    FILE * file_ptr1 = fopen("names1.txt", "r");
    FILE * file_ptr2 = fopen("names2.txt", "r");
    // check for errors
    if (file_ptr1 == NULL || file_ptr2 == NULL)
    {
        printf("Couldn't open at least one file");
        return -1;
    }
    // pull the data from each file, putting them into the lists, then close the files
    printf("Start file1\n");
    char f[MAX] = {0};
    char l[MAX] = {0};
    int x;
    fscanf(file_ptr1, "%s %s\n", &f, &l);  //
    while (f != NULL)
    {
        //char * token = strtok(temp, " ");
        //char f[MAX], l[MAX];
        //strcpy(f, token);
        //token = strtok(NULL, " ");
        append(l, f, &list1);
        fscanf(file_ptr1, "%s %s\n", &f, &l);
    }
    fclose(file_ptr1);
    printList(&list1);
    printf("Start file2\n");
    char f2[MAX] = {0};
    char l2[MAX] = {0};
    x = fscanf(file_ptr2, "%s %s\n", &f2, &l2);  //
    while (x > 1)
    {
        //char * token = strtok(temp, " ");
        //char f[MAX], l[MAX];
        //strcpy(f, token);
        //token = strtok(NULL, " ");
        append(l2, f2, &list2);
        fscanf(file_ptr2, "%s %s\n", &f, &l);
    }
    fclose(file_ptr2);
    printList(&list2);
    // merge the lists together
    printf("Start file3\n");
    merge(&list1, &list2);
    return 0;
}