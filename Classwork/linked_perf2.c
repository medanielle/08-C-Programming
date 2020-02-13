//  # Performance Labs
/*
## 2. (using the program you previously created) check if a word is a palindrome. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
   char data;
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
      printf(" %c =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n\n");
}

//insert link at the first location
void insert(struct node **p_head, char data) {
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
int compare_strings(struct node* p_head, struct node* p_rev_head)
{
    int result;
    struct node *ptr = p_head;
    struct node *revPtr = p_rev_head;
    while(ptr != NULL || revPtr != NULL) {        
        if (ptr->data != revPtr->data)
        {
            return 0;
        }
        revPtr = revPtr->next;
        ptr = ptr->next;
    return 1;
    }
}
int test_pali()
{
    printf("Normal\n");
    char test[] = "poop";
    for( int i = 0 ; i < strlen(test); i++)
    {
        insert(&head, test[i]);
    }
    printList(head);
    printf("Reversed\n");
    reverse_it(head);
    printList(reversed_head);
    if (compare_strings(head, reversed_head)== 0)
    {
        printf("NOT a palindrome!");
    }
    else if (compare_strings(head, reversed_head)== 1)
    {
        printf("Yay! A Palindrome!");
    }
    else
    {
        printf("Oops!");
    }
    
    return 0;
}


int main()
{
    test_pali();
    return 0;
}
/*   https://www.geeksforgeeks.org/reverse-a-linked-list/
// Iterative C program to reverse a linked list 
#include <stdio.h> 
#include <stdlib.h> 

/* Link list node */
struct Node { 
	int data; 
	struct Node* next; 
}; 

/* Function to reverse the linked list */
static void reverse(struct Node** head_ref) 
{ 
	struct Node* prev = NULL; 
	struct Node* current = *head_ref; 
	struct Node* next = NULL; 
	while (current != NULL) { 
		// Store next 
		next = current->next; 

		// Reverse current node's pointer 
		current->next = prev; 

		// Move pointers one position ahead. 
		prev = current; 
		current = next; 
	} 
	*head_ref = prev; 
} 

/* Function to push a node */
void push(struct Node** head_ref, int new_data) 
{ 
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
	new_node->data = new_data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
} 

/* Function to print linked list */
void printList(struct Node* head) 
{ 
	struct Node* temp = head; 
	while (temp != NULL) { 
		printf("%d ", temp->data); 
		temp = temp->next; 
	} 
} 

/* Driver program to test above function*/
int main() 
{ 
	/* Start with the empty list */
	struct Node* head = NULL; 

	push(&head, 20); 
	push(&head, 4); 
	push(&head, 15); 
	push(&head, 85); 

	printf("Given linked list\n"); 
	printList(head); 
	reverse(&head); 
	printf("\nReversed Linked list \n"); 
	printList(head); 
	getchar(); 
} 
*/
