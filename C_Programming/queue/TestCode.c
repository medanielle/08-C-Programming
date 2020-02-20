/*
This task will implement a simple queue using a linked list. A numNode struct is defined in the 
TestCode.h file to facilitate the creation of the stack.

Write the function createQueue that receives two parameters:

    actions: an int array - this array contains values in the even indicies 0,2,4 etc that indicate which type of 
        action to do with the queue:
    	1 - dequeue (remove an item from the queue)
    	2 - enqueue (add an item to the queue)
    	3 - empty queue

    	The odd indicies will only apply for enqueue actions. If the action received is action
    	enqueue (2), then the following index contains the value to add to the queue. The
    	odd indicies have no effect on dequeue (1) or empty queue (3)
    	
    	So if the function receives:  [2, 7, 2, 2, 1, 0, 3, 0], then you would enqueue 7 to
    	the queue, then enqueue 2 to the queue, then remove an item from the queue, then empty the queue.

    numActions: the total number of actions supplied in the array. In the above example this would be 4.

The function should iterate the actions array and determine what actions should occur on the queue.  Provide the 
implementation for enqueueing, dequeueing, emptying the queue accordingly.

If any action provided is not 1, 2, or 3, then return NULL.

Assume that the array will always have an even number of elements. 

The function will return a pointer that points to the front of the queue.

*/


#include <stdio.h>
#include <stdlib.h>
#include "TestCode.h"

/*
This task will implement a simple queue using a linked list. A numNode struct is defined in the 
TestCode.h file to facilitate the creation of the stack.

Write the function createQueue that receives two parameters:

    actions: an int array - this array contains values in the even indicies 0,2,4 etc that indicate which type of 
        action to do with the queue:
    	1 - dequeue (remove an item from the queue)
    	2 - enqueue (add an item to the queue)
    	3 - empty queue

    	The odd indicies will only apply for enqueue actions. If the action received is action
    	enqueue (2), then the following index contains the value to add to the queue. The
    	odd indicies have no effect on dequeue (1) or empty queue (3)
    	
    	So if the function receives:  [2, 7, 2, 2, 1, 0, 3, 0], then you would enqueue 7 to
    	the queue, then enqueue 2 to the queue, then remove an item from the queue, then empty the queue.

    numActions: the total number of actions supplied in the array. In the above example this would be 4.

The function should iterate the actions array and determine what actions should occur on the queue.  Provide the 
implementation for enqueueing, dequeueing, emptying the queue accordingly.

If any action provided is not 1, 2, or 3, then return NULL.

Assume that the array will always have an even number of elements. 

The function will return a pointer that points to the front of the queue.

*/


#include <stdio.h>
#include <stdlib.h>
#include "TestCode.h"

// The queue, front stores the front node of LL and rear stores the last node of LL 
struct Queue { 
	struct numNode *front, *rear; 
}; 

// A utility function to create a new linked list node. 
struct numNode* newNode(int k) 
{ 
	struct numNode* temp = (struct numNode*)malloc(sizeof(struct numNode)); 
	temp->num = k; 
	temp->next = NULL; 
	return temp; 
} 

// A utility function to create an empty queue 
struct Queue* createQueue() 
{ 
	struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue)); 
	q->front = q->rear = NULL; 
	return q; 
} 

// The function to add a key k to q 
void enQueue(struct Queue* q, int k) 
{ 
	// Create a new LL node 
	struct numNode* temp = newNode(k); 

	// If queue is empty, then new node is front and rear both 
	if (q->rear == NULL) { 
		q->front = q->rear = temp; 
		return; 
	} 

	// Add the new node at the end of queue and change rear 
	q->rear->next = temp; 
	q->rear = temp; 
} 

// Function to remove a key from given queue q 
void deQueue(struct Queue* q) 
{ 
	// If queue is empty, return NULL. 
	if (q->front == NULL) 
		return; 

	// Store previous front and move front one node ahead 
	struct numNode* temp = q->front; 
	q->front = q->front->next; 

	// If front becomes NULL, then change rear also as NULL 
	if (q->front == NULL) 
		q->rear = NULL; 

	free(temp); 
} 

void emptyQueue(struct Queue* q) {

	q->front = q->rear = NULL; 

}

void display(struct Queue* q)
{
    if(q->front == NULL)
        printf("Queue is Empty!!!\n");
    else{
        struct numNode *temp = q->front;
        while(temp->next != NULL){
	        printf("%d--->",temp->num);
	        temp = temp -> next;
        }
        printf("%d--->NULL\n",temp->num);
   }
}

struct numNode * makeQueue(int actions[], int numActions)
{
    struct Queue* q = createQueue();
    int count = 0;
    for (int i = 0; i<numActions; i++){
        switch (actions[count])
        {
        case 1:
            deQueue(q);
            display(q);
            break;

        case 2:
            enQueue(q, actions[count+1]);
            display(q);
            break;

        case 3:
            emptyQueue(q);
            display(q);
            break;
        
        default:
            printf("not 1-3 action\n");
            return NULL;
            break;
        }
        count+=2;
    }
    return q->front;
}
/*
// Driver Program to test functions 
int main() 
{ 
    int actions[] = {2, 55, 2, 10, 1, 0, 3, 0, 2, 7, 2, 2, 2};
    makeQueue(actions, 7);

	return 0; 
} 
*/