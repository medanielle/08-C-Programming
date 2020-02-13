#include<stdio.h> 
#include<stdlib.h> 
  
// Node Structure 
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
  
  //First Function
// displays a linked list in reverse manner 
void Part1(struct Node* head)   //PrintReverse
{
    // Base case   
    if (head == NULL) 
       return; 
  
    // print the list after head node 
    Part1(head->next); 
  
    // After everything else is printed, print head 
    printf("%d  ", head->data);
} 
 

void reverse_alt(struct Node * head, int count){
    if (count % 2 == 0) { 
        // print the list after head node 
        reverse_alt(head->next, count+1); 

        // After everything else is printed, print head 
        printf("%d  ", head->data);
    }
}

  //Second Function
// displays alternate nodes of a Linked List, first from head to end, and then from end to head. 
void Part2(struct Node* head) 
{ 
    int count = 0; 
    struct Node * ptr = head;
  
    while (ptr != NULL) { 
  
        // when count is even print the nodes 
        if (count % 2 == 0)  
            printf(" %d ", ptr->data); 
  
        // count the nodes 
        count++; 
  
        // move on the next node. 
        ptr = ptr->next; 
    }
    count = 0;
    reverse_alt(head, count);

} 


/* Function to print linked list */
void printList(struct Node* head) 
{ 
    struct Node* temp = head; 
    while (temp != NULL) { 
        printf("%d  ", temp->data); 
        temp = temp->next; 
    } 
}

/* Function to reverse all even positioned node and append at the end 
   odd is the head node of given linked list */
void rearrange(struct Node *odd) 
{ 
    // If linked list has less than 3 nodes, no change is required 
    if (odd == NULL || odd->next == NULL || odd->next->next == NULL) 
        return; 
  
    // even points to the beginning of even list 
     struct Node *even = odd->next; 
  
    // Remove the first even node 
    odd->next = odd->next->next; 
  
    // odd points to next node in odd list 
    odd = odd->next; 
  
    // Set terminator for even list 
     even->next = NULL; 
  
    // Traverse the  list 
    while (odd && odd->next) 
    { 
       // Store the next node in odd list  
       struct Node *temp = odd->next->next; 
  
       // Link the next even node at the beginning of even list 
       odd->next->next = even; 
       even = odd->next; 
  
       // Remove the even node from middle 
       odd->next = temp; 
  
       // Move odd to the next odd node 
       if (temp != NULL) 
         odd = temp; 
    } 
  
    // Append the even list at the end of odd list 
    //odd->next = even; 
    //Part1(odd);
} 
  

// Functions to run Part1() and Part2() 
// Given a reference (pointer to pointer) to the head of a list and an int, push a new node on the front  of the list. 
void push(struct Node** head_ref, int new_data) 
{ 
    // allocate node 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
   
    // put in the data  
    new_node->data  = new_data; 
     
    // link the old list off the new node 
    new_node->next = (*head_ref); 
     
    // move the head to point to the new node 
    (*head_ref)    = new_node; 
} 
   
// Driver program to test above functions 
int main() 
{ 
    // Begin with the empty list 
    struct Node* head = NULL; 
    struct Node *odd = NULL;
    
    
    /* Using push() to construct below list 1->2->3->4->5  */
    push(&head, 5); 
    push(&head, 4); 
    push(&head, 3); 
    push(&head, 2); 
    push(&head, 1);    
    odd = *head;
    
    printf("Show work of Part1() for list 1->2->3->4->5 \n"); 
    Part1(head); 
    
    printf("\nShow work of Part2() for list 1->2->3->4->5 \n");  
    rearrange(odd); 
    printList(odd);
    Part1(odd);

    //printf("\n");
    //printList(head);
    //getchar(); 
    return 0; 
} 
/*
Expected Output
 Show work of Part1() for list 1->2->3->4->5 
5 4 3 2 1 
Show work Part2() for list 1->2->3->4->5 
1 3 5 5 3 1 
*/