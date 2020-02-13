#include <stdio.h>
/*
int MAXSIZE = 8;       
int stack[8];     
int top = -1;            

int isempty() {

    if(top == -1)
        return 1;
    else
        return 0;
}
   
int isfull() {

    if(top == MAXSIZE)
        return 1;
    else
        return 0;
}

int peek() {
    return stack[top];
}

int pop() {
    int data;
	
    if(!isempty()) {
        data = stack[top];
        top = top - 1;   
        return data;
    } else {
        printf("Could not retrieve data, Stack is empty.\n");
   }
}

int push(int data) {

    if(!isfull()) {
        top = top + 1;   
        stack[top] = data;
    } else {
        printf("Could not insert data, Stack is full.\n");
    }
}

int test_stack() {
    // push items on to the stack 
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);

    printf("Element at top of the stack: %d\n" ,peek());
    printf("Elements: \n");

    // print stack data 
    while(!isempty()) {
        int data = pop();
        printf("%d\n",data);
   }

    printf("Stack full: %s\n" , isfull()?"true":"false");
    printf("Stack empty: %s\n" , isempty()?"true":"false");
   
    return 0;
}
*/
/*
Performance Lab 1
(Reversing the Words of a Sentence) Write a program that inputs a line of text and uses a stack to print the line reversed.
*/
#include<string.h>

# define BUFF 500

int MAXSIZE = BUFF;       
int stack[BUFF];     
int top = -1;            
int reversed[BUFF];

int isempty() {

    if(top == -1)
        return 1;
    else
        return 0;
}
   
int isfull() {

    if(top == MAXSIZE)
        return 1;
    else
        return 0;
}

int peek() {
    return stack[top];
}

int pop() {
    int data;
	
    if(!isempty()) {
        // printf("Data: %c, Top: %d\n", stack[top], top);
        data = stack[top];
        top = top - 1;   
        return data;
    } else {
        printf("Could not retrieve data, Stack is empty.\n");
   }
}

int push(int data) {

    if(!isfull()) {
        top = top + 1;   
        stack[top] = data;
        // printf("Data: %c, Top: %d\n", stack[top], top);
    } else {
        printf("Could not insert data, Stack is full.\n");
    }
}
void push_str(char * str)
{
    for (int i = 0; str[i] != 0; i++)
    {
        push(str[i]);
    }
}

int reverse_print(int len)
{
    for (int i = 0; i < len; i++)
    {
        
    }
    return 0;
}

char * new_rev(char reversed[BUFF], int len)
{
    for (int i = 0; i < len-1; i++)
    {
        char c = pop();
        // printf("%c ", c);
        reversed[i] = c;
    }
    //printf("\n");
    reversed[len-1]= '\0';
    return reversed;
}

int reverse_str()
{
    char string[BUFF];
    char reversed[BUFF];
    printf("enter a string to reverse: \n");
    fgets(string, BUFF, stdin);
    int len = strlen(string);
    string[len-1] = '\0';
    push_str(string);
    printf("String reversed: ");
    //reverse_print(len);
    new_rev(reversed, len); //char reversed[BUFF] =

    printf("'%s'\n", reversed);
}



/*
(Palindrome Tester) Write a program that uses a stack to determine whether a string is a palindrome (i.e., the string is spelled identically backward and forward).
*/

int palindrome()
{
    char string[BUFF];
    char reversed[BUFF];
    printf("enter a string to reverse: \n");
    fgets(string, BUFF, stdin);
    int len = strlen(string);
    string[len-1] = '\0';
    push_str(string);
    printf("String before and after reversal: \n");
    //reverse_print(len);
    new_rev(reversed, len); //char reversed[BUFF] =

    printf("'%s'\t'%s'\n", string, reversed);
    if (strcmp(string, reversed) == 0)
    {
        printf("Palindrome!!!");
    }
    else 
    {
        printf("NOT!!");
    }
    return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>

struct stackNode{
    char data;
    struct stackNode *nextPtr;
};
typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void convertToPostfix(char infix[], char postfix[]);
int isOperator(char c);
int precedence(char operator1, char operator2);
void push_it(StackNodePtr *topPtr, char value);
char pop_it(StackNodePtr *topPtr);
char stackTop(StackNodePtr topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr topPtr);

int stack_overflow_ans(){
    convertToPostfix(NULL, NULL);
    return 0;
}

void convertToPostfix(char infix[], char postfix[]){
    StackNode stack = {'(', NULL};
    StackNodePtr stackPtr = &stack;
    push_it(&stackPtr, 'a');

    //printf("%s\n", stackPtr->data);
    printStack(&stack);
}

void push_it(StackNodePtr *topPtr, char value){
        StackNode *node;
        node = malloc(sizeof(StackNode));

        node->data=value;
        node->nextPtr=*topPtr;
        *topPtr=node;
}

void printStack(StackNodePtr topPtr){
    if(topPtr == NULL){
        printf("%s\n", "NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO");
        return;
    }

    printf("%c\n", topPtr->data);
    printStack(topPtr->nextPtr);
}
*/
int main()
{
    reverse_str();
    // stack_overflow_ans();
    palindrome();
}