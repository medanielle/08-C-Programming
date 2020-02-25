#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "TestCode.h"

/*
Task #1

Write the function buildList that receives two parameters:
    names - an array of char * of people's first names
    size - the number of elements in the array

The buildList function should iterate through the "names" array and create a doubly-linked list
creating a node for each name in the list. Use the nameNode class defined in the TestCode.h file to create the
doubly-linked list. Each name is added to the head of the doubly-linked list.

The function should return a pointer to the head node of the doubly-linked list when complete.

Task #2

Write the function removeNode that receives two parameters:
    head - The first node in the doubly-linked list created in Task 1
    findName - a char * of a person's name that may be in a linked-list

The removeNode function will search the doubly-linked list for the name in "findName". If found, the node containing the
name must be removed from the doubly-linked list, ensure to cleanup any memory. If not found, do nothing.

The function should return a pointer to the head node of the doubly-linked list when complete.

Task #3

Write the function freeMemory that receives a pointer to your linked-list's head
node so you can iterate over the link list and free all allocated memory.

*/

struct nameNode* head; // global variable - pointer to head node.

//Creates a new Node and returns pointer to it. 
struct nameNode* GetNewNode(char * x) {
	struct nameNode* newNode = (struct nameNode*)malloc(sizeof(struct nameNode));
	strcpy(newNode->name, x);
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

//Inserts a Node at head of doubly linked list
struct nameNode* InsertAtHead(struct nameNode* head, char * x) {
	struct nameNode* newNode = GetNewNode(x);
    printf("Insert: %s\n", newNode->name);
	if(head == NULL) {
		head = newNode;
		return head;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
    printf("Insert2: %s\n", head->name);
    return head;
}

//Inserts a Node at tail of Doubly linked list
void InsertAtTail(char * x) {
	struct nameNode* temp = head;
	struct nameNode* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next; // Go To last Node
	temp->next = newNode;
	newNode->prev = temp;
}

//Prints all the elements in linked list in forward traversal order
void Print(struct nameNode* head) {
	struct nameNode* temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%s ",temp->name);
		temp = temp->next;
	}
	printf("\n");
}

//Prints all elements in linked list in reverse traversal order. 
void ReversePrint() {
	struct nameNode* temp = head;
	if(temp == NULL) return; // empty list, exit
	// Going to last Node
	while(temp->next != NULL) {
		temp = temp->next;
	}
	// Traversing backward using prev pointer
	printf("Reverse: ");
	while(temp != NULL) {
		printf("%s ",temp->name);
		temp = temp->prev;
	}
	printf("\n");
}

void search(char * data) {
   int pos = 0;
   
   if(head==NULL) {
      printf("Linked List not initialized");
      return;
   } 

   struct nameNode* current = head;
   while(current!=NULL) {
      pos++;
      if(strcmp(current->name, data) == 0) {
         printf("%d found at position %d\n", data, pos);
         return;
      }

      if(current->next != NULL)
         current = current->next;
      else
         break;
   }

   printf("%d does not exist in the list\n", data);
}
int find(char* key, struct nameNode *head)
{
    // Searches the list for the given key and returns the index or -1 if not found
    struct nameNode *curr = head;
    int index = 0;
    while (curr != NULL && strcmp(curr->name, key) != 0)
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

void remove_item(char* key, struct nameNode *head)
{
    
}

struct nameNode* buildList(char** names, int size)
{
	struct nameNode *head = NULL;

    for (int i = 0; i< size; i++){
        printf("BuildList: %s\n", names[i]);
        head = InsertAtHead(head, names[i]);
    }

	return head;

}

struct nameNode* removeNode(struct nameNode* head, char* key)
{
    // Traverses the list and removes the first found instance of the given key
    if (strcmp(head->name, key) == 0)
    {
        printf("Match!\n");
        head = head->next;
        printf("Match!!\n");
        head->prev = NULL;
        printf("Match!!!\n");
    }
    else
    {
        struct nameNode *curr = head;
        struct nameNode *prev = NULL;
        while (curr != NULL && strcmp(curr->name, key) != 0)
        {
            prev = curr;
            curr = curr->next;
        }
        if (curr != NULL)
        {
            prev->next = curr->next;
            prev->next->prev = prev;

        }
        else
        {
            printf("Did not find an element with data %s\n", key);
        }
    }
    //printf("Head after Removal: %s\n", head-> name);
    return head;
}

void freeMemory(struct nameNode *head)
{
    struct nameNode *curr = head;
    struct nameNode *prev = NULL;
    while (curr != NULL)
    {
        prev = curr;
        curr = curr->next;
        printf("Free: %s\n", prev->name);
        free(prev);
    }
    printf("ENd: %s\n", curr->name);
    return;
}


int main() {

    char* names9[] = { "Bobby","Paul","Gene","Ace" };


	struct nameNode* head = buildList(names9, sizeof(names9) / sizeof(*names9));
    Print(head);
    // Pass a name that's not in the list
    //head = 
    removeNode(head, "Carol");
    Print(head);
    printf("Compare: 'Bobby', '%s' = %d\n", head->name, strcmp("Bobby", head->name));
    printf("Compare: 'NULL', '%s'\n", head->next );
    printf("Compare: 'NULL', '%s'\n", head->prev );

    // Pass a name that's in the list
    //head = 
    removeNode(head, "Bobby");
    Print(head);
    // ASSERT_EQ(NULL, head);
    // Determine if head isn't null
    if (head != NULL)
        freeMemory(head);
}
	

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char data[256];
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
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf(" End\n");
}

void prepend(char* data, list *list1)
{
    // Adds a node to the beginning of the list
    node *link = (node*) malloc(sizeof(node));

    strcpy(link->data, data);
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

void append(char* data, list *list1)
{
    // Adds a node to the end of the list
    if (list1->head == NULL)
    {
        prepend(data, list1);
    }
    else
    {
        node *link = (node*) malloc(sizeof(node));
        strcpy(link->data, data);
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
    while (curr != NULL && strcmp(curr->data, key) != 0)
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
    if (list1->head->data == key)
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
        while (curr != NULL && strcmp(curr->data, key) != 0)
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

void swap(node* first, node* second)
{
    // swaps the values in the specified nodes
    char temp[256];
    strcpy(temp, first->data);
    strcpy(first->data, second->data);
    strcpy(second->data, temp);
}

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

void sort(list *list1)
{
    // bubble sorts the items in the given linked list
    node* i = list1->head;
    while (i->next != NULL)
    {
        node* j = list1->head;
        while (j->next != NULL)
        {
            if (isBigger(j->data, j->next->data))
            {
                swap(j, j->next);
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
        if (strcmp(curr->data, key) == 0)
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
        if (count(curr->data, list1) > 1)
        {
            node *temp = curr->next;
            remove_item(curr->data, list1);
            curr = temp;
        }
        else
        {
            while (find(curr->data, list2) > -1)
            {
                remove_item(curr->data, list2);
            }
            append(curr->data, &merged);
            curr = curr->next;
        }
    }
    curr = list2->head;
    while (curr != NULL)
    {
        if (count(curr->data, list2) > 1)
        {
            node *temp = curr->next;
            remove_item(curr->data, list2);
            curr = temp;
        }
        else
        {
            while (find(curr->data, list1) > -1)
            {
                remove_item(curr->data, list1);
            }
            append(curr->data, &merged);
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
        fputs(curr->data, file_ptr3);
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
    char c[256] = {0};
    char * temp = c;
    temp = fgets(c, 256, file_ptr1);
    while (temp != NULL)
    {
        append(temp, &list1);
        temp = fgets(c, 256, file_ptr1);
    }
    fclose(file_ptr1);
    c[0] = 0;
    temp = fgets(c, 256, file_ptr2);
    while (temp != NULL)
    {
        append(temp, &list2);
        temp = fgets(c, 256, file_ptr2);
    }
    fclose(file_ptr2);
    // merge the lists together
    merge(&list1, &list2);
    return 0;
/*
void deleteRear()
{
    if(n == NULL)
    {
        printf("No People Found");
    }
    else
    {
        node *temp1;
        if(n == NULL)
        {
            cout<<"No People Found"<<endl;
        }
        else
        {
            temp1 = start_ptr;
            if(temp1->prev == NULL && temp1->nxt == NULL)
            {
                start_ptr = NULL;
                delete temp1;
                n = NULL;
            }
            else
            {
                while (temp1->nxt != NULL)
                {
                    temp1 = temp1->nxt;
                    end_ptr= temp1->prev;
                }
                end_ptr->nxt = NULL;
                delete temp1;
                cout<<end_ptr->name<<endl;  
            }
        }
    }   
}
void deleteAPerson()
{
    if(n == NULL)
    {
        cout <<"No People Found" << endl;
    }
    else
    {
        node *temp1;
        temp1 = start_ptr;
        while(temp1 != NULL)
        {
            cout << "Name : " << temp1->name << endl;

            temp1 = temp1 ->nxt;
        }
        node *temp, *temp2, *temp3, *temp4;
        temp = start_ptr;
        string names; 
        cout << "Please Enter Person's Name: >>";
        cin >> names;
        while(temp->nxt != NULL && temp->name != names)
        {
            temp = temp->nxt;   
        }
        if (temp->name == names)
        {
            if(temp->prev == NULL && temp->nxt == NULL)
            {
                cout<<"Deleting Front"<<endl;
                cout<<"Only one person on the list"<<endl;
                temp = start_ptr;
                start_ptr = NULL;
                delete temp;
                n = NULL;
            }
            else if (temp->prev == NULL && temp->nxt != NULL)
            {
                cout<<"Deleting Front"<<endl;
                cout<<"There are other people on the list"<<endl;
                temp2 = start_ptr;
                start_ptr = start_ptr->nxt;
                start_ptr->prev = NULL;
                delete temp2;
            }
            else if(temp->prev != NULL && temp->nxt == NULL)
            {
                cout<<"Deleting End"<<endl;
                deleteRear();
            }
            else
            {
                current = temp;
                current->prev->nxt = current->nxt;
                current->nxt->prev = current->prev;
                delete current;
            }
        }
        else
        {
            cout<<"No such person exists"<<endl;
        }
    }
}
*/