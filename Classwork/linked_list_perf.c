//  # Performance Labs
/*
## 1. (Creating a Linked List, Then Reversing Its Elements) Write a program that creates a linked list of 10 characters, then creates a copy of the list in reverse order.
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;
struct node *reversed_head = NULL;


//display the list
void printList(struct node* p_head) {

   struct node *ptr = p_head;

   printf("\n[head] =>");
   //start from the beginning
   while(ptr != NULL) {        
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n\n");
}

//insert link at the first location
void insert(struct node **p_head, int data) {
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));

   //link->key = key;
   link->data = data;

   //point it to old first node
   link->next = (*p_head);

   //point first to new first node
   (*p_head) = link;
}
void reverse_it(struct node* p_head)
{
    struct node *ptr = p_head;

    //start from the beginning
    while(ptr != NULL) {        
        insert(&reversed_head, ptr->data);
        ptr = ptr->next;
   }
}
int test_reverse()
{
    printf("Normal\n");
    for( int i = 0 ; i < 10; i++)
    {
        insert(&head, i+1);
    }
    printList(head);
    printf("Reversed\n");
    reverse_it(head);
    printList(reversed_head);
    return 0;
}


int main()
{
    test_reverse();
    return 0;
}