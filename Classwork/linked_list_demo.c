#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list
void printList() {

   struct node *ptr = head;

   printf("\n[head] =>");
   //start from the beginning
   while(ptr != NULL) {        
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}

//insert link at the first location
void insert(int data) {
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));

   //link->key = key;
   link->data = data;

   //point it to old first node
   link->next = head;

   //point first to new first node
   head = link;
}

int first() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   printList();
   return 0;
}
/*
Output:
[head] => 56 => 40 => 1 => 30 => 20 => 10 => [null]

Other things you can do to a Linked List

////////////////////////////////////////////      Traversing         ///////////////////////////////////////
Displaying the contents of a linked list is very simple. We keep moving the temp node to the next one and display its contents.

When temp is NULL, we know that we have reached the end of linked list so we get out of the while loop.

struct node *temp = head;
printf("\n\nList elements are - \n");
while(temp != NULL)
{
     printf("%d --->",temp->data);
     temp = temp->next;
}

The output of this program will be:

List elements are - 
1 --->2 --->3 --->
*/

#include<stdio.h>
#include<stdlib.h>/*
struct node
{
  int data;
  struct node *next;
};*/
void display(struct node* head)
{
      struct node *temp = head;
      printf("\n\nList elements are - \n");
      while(temp != NULL)
      {
   printf("%d --->",temp->data);
   temp = temp->next;
      }
}
void insertAtMiddle(struct node *head, int position, int value) {
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = 4;
    struct node *temp = head;
    for(int i=2; i < position; i++) {
        if(temp->next != NULL) {
            temp = temp->next;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void insertAtFront(struct node** headRef, int value) {
    struct node* head = *headRef;
    
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    
    *headRef = head;
}
void insertAtEnd(struct node* head, int value){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    
    struct node *temp = head;
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = newNode;
}
void deleteFromFront(struct node** headRef){
    struct node* head =  *headRef;
    head = head->next;
    *headRef = head;
}

void deleteFromEnd(struct node* head){
    struct node* temp = head;
    while(temp->next->next!=NULL){
      temp = temp->next;
    }
    temp->next = NULL;
}

void deleteFromMiddle(struct node* head, int position){
    struct node* temp = head;
    int i;
    for(int i=2; i< position; i++) {
        if(temp->next!=NULL) {
            temp = temp->next;
        }
    }
    temp->next = temp->next->next;
}


int full_ex() {
  /* Initialize nodes */
  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;
  /* Allocate memory */
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));
  /* Assign data values */
  one->data = 1;
  two->data = 2;
  three->data = 3;
  /* Connect nodes */
  one->next = two;
  two->next = three;
  three->next = NULL;
  /* Save address of first node in head */
  head = one;
  display(head);            // 1 --->2 --->3 --->     
  insertAtFront(&head, 4);
  display(head);            // 4 --->1 --->2 --->3 --->     
  deleteFromFront(&head);
  display(head);            // 1 --->2 --->3 ---> 
  insertAtEnd(head, 5);
  display(head);            // 1 --->2 --->3 --->5 --->   
  deleteFromEnd(head);
  display(head);            // 1 --->2 --->3 --->       
  int position = 3;
  insertAtMiddle(head, position, 10);
  display(head);            // 1 --->2 --->10 --->3 --->      
  deleteFromMiddle(head, position);
  display(head);            // 1 --->2 --->3 --->     
}

int main()
{
    // first();
    full_ex();
    return 0;
}
/*
Expected Output:
List elements are -                                                                                                                                                       
1 --->2 --->3 --->     
   
List elements are -                                                                                                                                                       
4 --->1 --->2 --->3 --->                                                                                                                                                                              
List elements are -                                                                                                                                                       
1 --->2 --->3 --->                                                                                                                                                                                     
List elements are -                                                                                                                                                       
1 --->2 --->3 --->5 --->                                                                                                                                                                           
List elements are -                                                                                                                                                       
1 --->2 --->3 --->                                                                                                                                                                              
List elements are -                                                                                                                                                       
1 --->2 --->10 --->3 --->  

List elements are - 
1 --->2 --->3 ---> 
*/