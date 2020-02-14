// Write a function to merge two sorted files of names and write the names to a new file, elininating duplicates

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

//#define SWAP(T,x,y) {T *p = &(x); T *q = &(y); T z = *p; *p = *q; *q = z;}
#define SWAP(type, a_, b_) \
do { \
    struct { type *a; type *b; type t; } SWAP; \
    SWAP.a  = &(a_); \
    SWAP.b  = &(b_); \
    SWAP.t  = *SWAP.a; \
    *SWAP.a = *SWAP.b; \
    *SWAP.b = SWAP.t; \
} while (0)

struct student{
    char firstname[20];
    char lastname[20];
    //double grade;
    //char zipcode[10];
    struct student *next;
};

struct student *head=NULL;
/*
void addFromFile()
{
    FILE *f1 = fopen("names.txt", "rt"); // <<--(1)
    FILE *f2 = fopen("names2.txt", "rt"); // <<--(1)
    if(!f1 || !f2) exit(1); // <<--(1)
    // n1 and n2 represents the actual value that's been read. r1 and r2 the status of each file.
    fscanf(f1, "%s,%s", &l1, &n1);
    fscanf(f2, "%d", &l2, &n2);
}
*/
void add(char *f, char *l) {  //, double score
    struct student *a;
    a=(struct student*)malloc(sizeof(struct student));
    strcpy(a->firstname,f);
    strcpy(a->lastname,l);
    //a->grade = score;
    a->next = head;
    head = a;
}
void printout(char *label) {
    struct student *node;
    printf("\t%s\n",label);
    printf("  First\t\t  Last \n");
    for(node=head; node !=NULL; node=node->next) {
        printf("%s \t\t%s\n", node->firstname, node->lastname); // \t%.1f , node->grade
    }
}

void writeToFile(){
    FILE * fptr;
    fptr = fopen("names2.txt", "w");
    struct student * iterator = head;

    if(fptr==NULL)
    {
        printf("Error\n");
    }

    else
    {
        while(iterator!= NULL)
        {
            fprintf(fptr, "%s,%s\n", iterator->lastname, iterator->firstname);
            iterator= iterator->next;
        }
    }

    fclose(fptr);
    }


int prep1(){
    add("Bab","Smith");
    add("Eric","Vonor");
    add("Marris","Minor");
    add("Master","Bates");
    add("Zae","Bodkin");
    add("Mary","Pippin");
    
    printout("BEFORE");

/* bubble sort */
    int mark=8;
    struct student *walk, *prev; 
    prev=head;
    while(mark) 
    {
        mark=0;
        for(walk=head; walk != NULL; walk=walk->next) 
        {
            if (walk->next && strcmp(walk->lastname, walk->next->lastname)>0) 
            {
                /* printf("swapping %s %s\n", walk->firstname, walk->next->firstname); */
                mark=1;
                if (walk == head) 
                {
                    struct student *v2=walk->next;
                    struct student *v3=walk->next->next;
                    SWAP(struct student *, v3->next, v2->next);
                    SWAP(struct student *, head, v3->next);
                    walk = v3;
                } else { 
                    struct student *v1=prev;
                    struct student *v2=walk;
                    struct student *v3=walk->next;
                    SWAP(struct student *, v3->next, v2->next);
                    SWAP(struct student *, v1->next, v3->next);
                    walk = v3;
                }
            }
            prev=walk;
        }
    }
    printout("AFTER");
    writeToFile();
    return 0;
}

int prep2(){
    add("Bab","Smith");
    add("Eric","Vonor");
    add("Marris","Minor");
    add("Master","Bates");
    add("Zae","Bodkin");
    add("Mary","Pippin");
    
    printout("BEFORE");

/* bubble sort */
    int mark=8;
    struct student *walk, *prev; 
    prev=head;
    while(mark) 
    {
        mark=0;
        for(walk=head; walk != NULL; walk=walk->next) 
        {
            if (walk->next && strcmp(walk->lastname, walk->next->lastname)>0) 
            {
                /* printf("swapping %s %s\n", walk->firstname, walk->next->firstname); */
                mark=1;
                if (walk == head) 
                {
                    struct student *v2=walk->next;
                    struct student *v3=walk->next->next;
                    SWAP(struct student *, v3->next, v2->next);
                    SWAP(struct student *, head, v3->next);
                    walk = v3;
                } else { 
                    struct student *v1=prev;
                    struct student *v2=walk;
                    struct student *v3=walk->next;
                    SWAP(struct student *, v3->next, v2->next);
                    SWAP(struct student *, v1->next, v3->next);
                    walk = v3;
                }
            }
            prev=walk;
        }
    }
    printout("AFTER");
    writeToFile();
    return 0;
}

void merge(char* arq1, char* arq2){
    FILE *final;
    final = fopen("merge.txt", "w"); // <<--(1)
    FILE *f1 = fopen(arq1, "rt"); // <<--(1)
    FILE *f2 = fopen(arq2, "rt"); // <<--(1)
    if(!f1 || !f2 || !final) exit(1); // <<--(1)
    // n1 and n2 represents the actual value that's been read. r1 and r2 the status of each file.
    char n1[20], n2[20], fn1[20], fn2[20], equal[20];
    int r1,r2;
    r1 = fscanf(f1, "%s, %s\n", &n1, &fn1);
    r2 = fscanf(f2, "%s, %s\n", &n2, &fn2);
    while(r1>0 || r2>0){ // <<--(2)
        printf("f1: %s\tf2: %s\n", fn1, fn2);
        if(r1 < 1 || strcmp(n1, n2)>0){ // <<--(2)    n2 < n1
            fprintf(final, "%s,%s\n", n2, fn2);
            r2 = fscanf(f2, "%s,%s",  &n2, &fn2);
        }else if(r2 < 1 || strcmp(n2, n1)>0){ // <<--(2)     n1 < n2
            fprintf(final, "%s,%s\n", n1, fn1);
            r1 = fscanf(f1, "%s,%s",  &n1, &fn1);
        }else{
            strcpy(equal, n1);
            fprintf(final, "%s,%s\n", n1, fn1);
            while(strcmp(n1, equal) == 0 && r1 > 0) r1 = fscanf(f1, "%s,%s", n1, fn1); // <<--(2,3)    n1 == equal
            while(strcmp(n2, equal) == 0 && r2 > 0) r2 = fscanf(f2, "%s,%s", &n2, &fn2); // <<--(2,3)    n2 == equal
        }
    }
    fclose(final);
    fclose(f1);
    fclose(f2);
}
int main(int argc, char const *argv[]){
    merge("names.txt","names2.txt");
    return 0;
}