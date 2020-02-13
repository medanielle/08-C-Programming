#include<stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();
int items[SIZE], front = -1, rear = -1;
int test()
{
    //deQueue is not possible on empty queue
    deQueue();
    
    //enQueue 5 elements
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    
    //6th element can't be added to queue because queue is full
    enQueue(6);
    
    display();
    
    //deQueue removes element entered first i.e. 1
    deQueue();
    
    //Now we have just 4 elements
    display();
    
    return 0;
    
}
void enQueue(int value){
    if(rear == SIZE-1)
        printf("\nQueue is Full!!");
    else {
        if(front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        // printf("\nInserted -> %d", value);
    }
}
void deQueue(){
    if(front == -1)
        printf("\nQueue is Empty!!");
    else{
        // printf("\nDeleted : %d\n", items[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}
void display(){
    if(rear == -1)
        printf("\nQueue is Empty!!!");
    else{
        int i;
        printf("\nQueue = ");
        for(i=front; i<=rear; i++)
            printf("%d\t",items[i]);
        printf("\n");
    }
}
/*
OUTPUT:
Queue is Empty!!
Inserted -> 1
Inserted -> 2
Inserted -> 3
Inserted -> 4
Inserted -> 5
Queue is Full!!
Queue elements are:
1    2    3    4    5    
Deleted : 1
Queue elements are:
2    3    4    5

*/

/*

Write a program to implement a queue using an array
Write a program that implements a Queue as shown below:
--Enqueue elements--
Enter a number to enqueue:1
1
Enter a number to enqueue:2
2 1
Enter a number to enqueue:3
3 2 1
Enter a number to enqueue:4
4 3 2 1
Enter a number to enqueue:5
5 4 3 2 1
Queue is full
 
--Dequeue elements --
dequeue element 1
5 4 3 2
dequeue element 2
5 4 3
dequeue element 3
5 4
dequeue element 4
5
dequeue element 5
 
Queue is empty

*/

int test2()
{
    int x;
    printf("--Enqueue elements--\n");
    while (rear != SIZE-1)
    {
        printf("\nEnter a number to enqueue: ");
        scanf("%d", &x);
        enQueue(x);
        display();
    }
    printf("\nQueue is Full!!\n");
    printf("\n--Dequeue elements --\n");
    for(int i=0; i<SIZE; i++)
    {
        printf("\ndequeue element %d\n", i+1);
        deQueue();
        display();
    }
    
}

int main()
{
    test2();
    return 0;
}