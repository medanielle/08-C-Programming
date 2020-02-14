
/*
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct student{
    char firstname[20];
    char lastname[20];
    double grade;
    char zipcode[10];
    struct student *next;
};

struct student *head=NULL;
size_t nodecount=0;

void add(char *f, char *s, double score) {
struct student *a;
a=(struct student*)malloc(sizeof(struct student));
strcpy(a->firstname,f);
strcpy(a->lastname,s);
a->grade = score;
a->next = head;
head = a;
nodecount++;
}


static int cmpgrade(const void *p1, const void *p2) {
    struct student *g1, *g2;
    g1=*(struct student **)p1;
    g2=*(struct student **)p2;
    return g1->grade > g2->grade;
}

int main(int argc, char ** argv){
    int i;
    struct student *walk,**sa, **sap; 
    add("Bob","Smith",10);
    add("Eric","Von Däniken",90);
    add("Morris","Minor",91);
    add("Master","Bates",9);
    add("Zoe","Bodkin",20);
    add("Mary","Pippin",30);

// copy into array of pointers
sa=calloc(sizeof (struct student*), nodecount);
sap=sa;
        for(walk=head; walk != NULL; walk=walk->next) {
              *sap = walk;
              sap++;
        }
        printf("before\n");
        for (i=0; i< nodecount; i++) {
            printf("%s %s %f\n", sa[i]->firstname, sa[i]->lastname, sa[i]->grade);
        }
        // qsort 
        qsort(sa, nodecount, sizeof (struct student *), cmpgrade);

        printf("after\n");
        for (i=0; i< nodecount; i++) {
            printf("%s %s %f\n", sa[i]->firstname, sa[i]->lastname, sa[i]->grade);
        }
    return 0;
}
*/


/*
#define MAX_STR_LEN 80

typedef struct link_node {
	char node_str[MAX_STR_LEN];
	struct link_node *next;
} node;

int compare_node(struct link_node *n1, struct link_node *n2);
struct link_node *add_node(struct link_node	*list, struct link_node *node);
void display_list(struct link_node *head);
void free_list(node *head);
void cleanInput(char* input);

struct link_node *add_node(struct link_node	*list, struct link_node *node){
	struct link_node *prev, *next;
	if (!list) {
		list = node;
	}
	else {
		prev = NULL;
		next = list;
		while (next && compare_node(node,next)>0) {
			prev = next;
			next = next->next;
		}
		if (!next) {
			prev->next = node;
		}
		else {
			if (prev) {
				node->next = prev->next;
				prev->next = node;
			}
			else {
				node->next = list;
				list = node;
			}
		}
	}
	return list;
}

void free_list(node *head) {
	node *prev = head;
	node *cur = head;
	while (cur) {
		prev = cur;
		cur = prev->next;
		free(prev);
	}
}

int compare_node(struct link_node *n1, struct link_node *n2) {
	return strcmp(n1->node_str, n2->node_str);
}

void cleanInput(char* input) {
	int len = strlen(input);
	int i;
	for (i = 0; i < len-1; i++) {}
	input[i] = '\0';
}

void display_list(struct link_node *head) {
	while (head) {
		printf("%s \n", head->node_str);
		head = head->next;
	}
}

int main() {
	char input[MAX_STR_LEN];
	node *head, *newNode;
	head = NULL;
	printf("Enter a string\n");
	do {
		fgets(input, MAX_STR_LEN, stdin);
		cleanInput(input);
		newNode = (node*)malloc(sizeof(node));
		strcpy(newNode->node_str, input);
		newNode->next = NULL;
		if (input[0] != '\0') {
			head = add_node(head, newNode);
		}
	} while (input[0] != '\0');
	display_list(head);
	free_list(head);
	return 0;
}

*/
/*


    struct node {
    char first[20];
    char last[20];
    struct node *next;
};


void insertion(struct node **head) {
    if((*head)== NULL || (*head)->next == NULL) {
       return;
    }
    struct node *t1 = (*head)->next;
    while(t1 != NULL) {
        char sec_data[20] = t1->last;
        int found = 0;
        struct node *t2 = *head;
        while(t2 != t1) {
            if(t2->last > t1->last && found == 0) {
                sec_data = t2->data;
                t2->data = t1->data;
                found = 1;
                t2 = t2->next;
            } else {
                if(found == 1) {
                    int temp = sec_data;
                    sec_data = t2->data;
                    t2->data = temp;
                }
                t2 = t2->next;
            }
       }
       t2->data = sec_data;
       t1 = t1->next;
    }
}
*/




/*
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

// Defining comparator function as per the requirement 
static int myCompare(const void* a, const void* b) 
{ 

	// setting up rules for comparison 
	return strcmp(*(const char**)a, *(const char**)b); 
} 

// Function to sort the array 
void sort(const char* arr[], int n) 
{ 
	// calling qsort function to sort the array 
	// with the help of Comparator 
	qsort(arr, n, sizeof(const char*), myCompare); 
} 

int main() 
{ 

	// Get the array of names to be sorted 
	const char* arr[] 
		= { "geeksforgeeks", "geeksquiz", "clanguage" }; 

	int n = sizeof(arr) / sizeof(arr[0]); 
	int i; 

	// Print the given names 
	printf("Given array is\n"); 
	for (i = 0; i < n; i++) 
		printf("%d: %s \n", i, arr[i]); 

	// Sort the given names 
	sort(arr, n); 

	// Print the sorted names 
	printf("\nSorted array is\n"); 
	for (i = 0; i < n; i++) 
		printf("%d: %s \n", i, arr[i]); 

	return 0; 
} 
*/

/*
/* Program to insert in a sorted list 
#include<stdio.h> 
#include<stdlib.h> 

/* Link list node 
struct Node 
{ 
	int data; 
	struct Node* next; 
}; 

/* function to insert a new_node in a list. Note that this 
function expects a pointer to head_ref as this can modify the 
head of the input linked list (similar to push())
void sortedInsert(struct Node** head_ref, struct Node* new_node) 
{ 
	struct Node* current; 
	/* Special case for the head end 
	if (*head_ref == NULL || (*head_ref)->data >= new_node->data) 
	{ 
		new_node->next = *head_ref; 
		*head_ref = new_node; 
	} 
	else
	{ 
		/* Locate the node before the point of insertion 
		current = *head_ref; 
		while (current->next!=NULL && 
			current->next->data < new_node->data) 
		{ 
			current = current->next; 
		} 
		new_node->next = current->next; 
		current->next = new_node; 
	} 
} 

/* BELOW FUNCTIONS ARE JUST UTILITY TO TEST sortedInsert 

/* A utility function to create a new node 
struct Node *newNode(int new_data) 
{ 
	/* allocate node 
	struct Node* new_node = 
		(struct Node*) malloc(sizeof(struct Node)); 

	/* put in the data 
	new_node->data = new_data; 
	new_node->next = NULL; 

	return new_node; 
} 

// Function to print linked list 
void printList(struct Node *head) 
{ 
	struct Node *temp = head; 
	while(temp != NULL) 
	{ 
		printf("%d ", temp->data); 
		temp = temp->next; 
	} 
} 

// Driver program to test count function
int main() 
{ 
	// Start with the empty list 
	struct Node* head = NULL; 
	struct Node *new_node = newNode(5); 
	sortedInsert(&head, new_node); 
	new_node = newNode(10); 
	sortedInsert(&head, new_node); 
	new_node = newNode(7); 
	sortedInsert(&head, new_node); 
	new_node = newNode(3); 
	sortedInsert(&head, new_node); 
	new_node = newNode(1); 
	sortedInsert(&head, new_node); 
	new_node = newNode(9); 
	sortedInsert(&head, new_node); 
	printf("\n Created Linked List\n"); 
	printList(head); 

	return 0; 
} 
*/