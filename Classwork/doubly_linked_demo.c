/*
// adding to the front
void addAtFront(struct Node** head_ref, int new_data) //inserts a new node on the front of the list. 
{ 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));   // allocate node 
    new_node->data = new_data; //add in the data  
    new_node->next = (*head_ref); // change next of new node as head and previous as NULL 
    new_node->prev = NULL; 
    if ((*head_ref) != NULL)  // modify prev of head node to new node 
        (*head_ref)->prev = new_node; 
    (*head_ref) = new_node;   // change the head to point to the new node 
}
// adding at a given section
void addAt(struct Node* prev_node, int new_data) 
{ 
    if (prev_node == NULL) { 
        printf("the given previous node cannot be NULL");  // check if the given prev_node is NULL 
        return; 
    } 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));  // allocate new node 
    new_node->data = new_data;  // add in the data  
    new_node->next = prev_node->next;    // change next of new node as next of prev_node 
    prev_node->next = new_node;   // modify the next of prev_node as new_node
    new_node->prev = prev_node;   // Make prev_node as previous of new_node 
    if (new_node->next != NULL) 
        new_node->next->prev = new_node;  // Change previous of new_node's next node 
} 
// adding to the end
void addAtEnd(struct Node** head_ref, int new_data) 
{ 
    
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
    struct Node* last = *head_ref; //used in traversing
    new_node->data = new_data; // add in the data
    new_node->next = NULL; // the added node will be the last, this is what it will point to.
    if (*head_ref == NULL) { 
        new_node->prev = NULL; 
        *head_ref = new_node; // overalll checking for emptiness 
        return; 
    } 
  
    while (last->next != NULL) // go through the list until you reach the last node
        last = last->next; 
    last->next = new_node; // modify the next of final node
    new_node->prev = last;  modify the final node as previous of the new one
    return; 
} 
// Delete from the front
void RemoveFirstNode()
{
    struct node * NodeToDel;
    if(stnode == NULL)
    {
        printf(" Delete is not possible. No data in the list.\n");
    }
    else
    {
        NodeToDel = stnode;
        stnode = stnode->nextptr;   // move the next address of starting node to 2 node
        stnode->preptr = NULL;      // set previous address of staring node is NULL
        free(NodeToDel);            // delete the first node from memory
    }
}
// Delete from the end
void DeleteLastNode()
{
    struct node * NodeToDel;
 
    if(ennode == NULL)
    {
        printf(" Delete is not possible. No data in the list.\n");
    }
    else
    {
        NodeToDel = ennode;
        ennode = ennode->preptr;    // move the previous address of the last node to 2nd last node
        ennode->nextptr = NULL;     // set the next address of last node to NULL
        free(NodeToDel);            // delete the last node
    }
}

//////////         ???????????????????  Delete from ???????????????????       ////////////////

*/

// VARIOUS EXAMPLES OF DOUBLY LINKED LISTS
// Doubly Linked List Example 1
/* Doubly Linked List implementation */
#include<stdio.h>
#include<stdlib.h>

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head; // global variable - pointer to head node.

//Creates a new Node and returns pointer to it. 
struct Node* GetNewNode(int x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

//Inserts a Node at head of doubly linked list
void InsertAtHead(int x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}

//Inserts a Node at tail of Doubly linked list
void InsertAtTail(int x) {
	struct Node* temp = head;
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next; // Go To last Node
	temp->next = newNode;
	newNode->prev = temp;
}

//Prints all the elements in linked list in forward traversal order
void Print() {
	struct Node* temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

//Prints all elements in linked list in reverse traversal order. 
void ReversePrint() {
	struct Node* temp = head;
	if(temp == NULL) return; // empty list, exit
	// Going to last Node
	while(temp->next != NULL) {
		temp = temp->next;
	}
	// Traversing backward using prev pointer
	printf("Reverse: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

int example1() {
    printf("\nExample 1: \n");

	/*Driver code to test the implementation*/
	head = NULL; // empty list. set head as NULL. 
	
	// Calling an Insert and printing list both in forward as well as reverse direction. 
	InsertAtTail(2); Print(); ReversePrint();
	InsertAtTail(4); Print(); ReversePrint();
	InsertAtHead(6); Print(); ReversePrint();
	InsertAtTail(8); Print(); ReversePrint();
	
}
//Doubly Linked List Example 2
#include <stdio.h>
#include <stdlib.h>

struct node_ex2 {
    int data;
    struct node_ex2 *prev;
    struct node_ex2 *next;
};

struct node_ex2 *head_ex2 = NULL;
struct node_ex2 *last_ex2 = NULL;

struct node_ex2 *current_ex2 = NULL;

//Create Linked List
void add_ex2(int data) {
    // Allocate memory for new node;
    struct node_ex2 *link_ex2 = (struct node_ex2*) malloc(sizeof(struct node_ex2));
 
    link_ex2->data = data;
    link_ex2->prev = NULL;
    link_ex2->next = NULL;
 
    // If head is empty, create new list
    if(head_ex2==NULL) {
        head_ex2 = link_ex2;
        return;
    }
 
    current_ex2 = head_ex2;
    
    // move to the end of the list
    while(current_ex2->next!=NULL)
        current_ex2 = current_ex2->next;
 
    // Insert link at the end of the list
    current_ex2->next = link_ex2;
    last_ex2 = link_ex2;
    link_ex2->prev = current_ex2;
}

//display the list
void display_ex2() {
    struct node_ex2 *ptr_ex2 = head_ex2;
 
    printf("\n[head] <=>");
 
    //start from the beginning
    while(ptr_ex2->next != NULL) {        
        printf(" %d <=>",ptr_ex2->data);
        ptr_ex2 = ptr_ex2->next;
    }
    
    printf(" %d <=>",ptr_ex2->data);
    printf(" [head]\n");
}

int example2() {
    printf("\nExample 2: \n");
    add_ex2(1);
    add_ex2(2);
    add_ex2(3);
    add_ex2(10);
    add_ex2(20);
    add_ex2(30); 
 
    display_ex2();
    return 0;
}


// Example # 3

#include <stdio.h>
#include <stdlib.h>

struct node_ex3 {
   int data;
   struct node_ex3 *prev;
   struct node_ex3 *next;
};

struct node_ex3 *head_ex3 = NULL;
struct node_ex3 *last_ex3 = NULL;

struct node_ex3 *current_ex3 = NULL;

//Create Linked List
void add_ex3(int data) {
    // Allocate memory for new node;
    struct node_ex3 *link_ex3 = (struct node_ex3*) malloc(sizeof(struct node_ex3));
 
    link_ex3->data = data;
    link_ex3->prev = NULL;
    link_ex3->next = NULL;
 
    // If head is empty, create new list
    if(head_ex3==NULL) {
        head_ex3 = link_ex3;
        return;
    }
 
    current_ex3 = head_ex3;
    
    // move to the end of the list
    while(current_ex3->next!=NULL)
        current_ex3 = current_ex3->next;
 
    // Insert link at the end of the list
    current_ex3->next = link_ex3;
    last_ex3 = link_ex3;
    link_ex3->prev = current_ex3;
} 

//display the list
void display_ex3() {
    struct node_ex3 *ptr_ex3 = head_ex3;
 
    printf("\n[head] <=>");
 
    //start from the beginning
    while(ptr_ex3->next != NULL) {        
        printf(" %d <=>",ptr_ex3->data);
        ptr_ex3 = ptr_ex3->next;
    }
    
    printf(" %d <=>",ptr_ex3->data);
    printf(" [head]\n");
}

int example3() {
    printf("\nExample 3: \n");
    add_ex3(1);
    add_ex3(2);
    add_ex3(3);
    add_ex3(10);
    add_ex3(20);
    add_ex3(30); 
 
    display_ex3();
    return 0;
}


//Example #4

#include <stdio.h>
#include <stdlib.h>

struct node_ex4 {
    int data;
    struct node_ex4 *prev;
    struct node_ex4 *next;
};

struct node_ex4 *head_ex4 = NULL;
struct node_ex4 *last_ex4 = NULL;

struct node_ex4 *current_ex4 = NULL;

//display the list
void display_ex4() {
    struct node_ex4 *ptr_ex4 = head_ex4;
 
    printf("\n[head] <=>");
    //start from the beginning
    while(ptr_ex4 != NULL) {        
        printf(" %d <=>",ptr_ex4->data);
        ptr_ex4 = ptr_ex4->next;
    }
 
    printf(" [last]\n");
}

//display the list
void displayBackward_ex4() {
    struct node_ex4 *ptr_ex4 = last_ex4;
 
    printf("\n[head] <=>");
    //start from the beginning
    while(ptr_ex4 != NULL) {        
        printf(" %d <=>",ptr_ex4->data);
        ptr_ex4 = ptr_ex4->prev;
    }
 
    printf(" [last]\n");
}

//Create Linked List
void add_ex4(int data) {
    // Allocate memory for new node;
    struct node_ex4 *link_ex4 = (struct node_ex4*) malloc(sizeof(struct node_ex4));
 
    link_ex4->data = data;
    link_ex4->prev = NULL;
    link_ex4->next = NULL;
 
    // If head is empty, create new list
    if(head_ex4==NULL) {
        head_ex4 = link_ex4;
        return;
    }
 
    current_ex4 = head_ex4;
    
    // move to the end of the list
    while(current_ex4->next!=NULL)
        current_ex4 = current_ex4->next;
 
    // Insert link at the end of the list
    current_ex4->next = link_ex4;
    last_ex4 = link_ex4;
    link_ex4->prev = current_ex4;
}

int example4() {
    printf("\nExample 4: \n");
    add_ex4(1);
    add_ex4(2);
    add_ex4(3);
    add_ex4(4);
    add_ex4(5);
    add_ex4(6); 

    display_ex4();
    displayBackward_ex4();
   
    return 0;
}

int main()
{
    example1();
    example2();
    example3();
    example4();
}