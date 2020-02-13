
/*
## 3. Create an investment list.
```
Investment Portfolio
Symbol   Shares   Price    Value
GOOG     1000     1801.19  1801189.94
APPLE    1000     1128.77  1128770.02

```
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// constant
#define ITEMS 2
// define stock structure
struct stock {
    char symbol[5];
    int quantity;
    float price;
    struct stock *next;
};
// initialize struct objects
struct stock *first;
struct stock *current;
struct stock *new;

//prototype functions
struct stock *make_structure(void);
void fill_structure(struct stock *a,int c);
void show_structure(struct stock *a);

int main()
{
    // loop through to add structures to the list
    for(int x=0; x<ITEMS; x++)
    {
        // if first
        if(x==0)
        {
            // allocate memory and set points
            first=make_structure();
            current=first;
        }
        // all others
        else
        {
            // allocate memory and set points
            new=make_structure();
            current->next=new;
            current=new;
        }
        // prompt user for data
        fill_structure(current,x+1);
    }
    current->next=NULL;

    /* Display database */
    puts("Investment Portfolio\n");
    printf("Symbol\tShares\tPrice\tValue\n");
    // set current to head
    current = first;
    while(current)  // same as != NULL
    {
        //printf("\n");
        show_structure(current);  // print current
        current=current->next;      // move to next item in linked list
    }
    return(0);
}
// allocate memory and raise errors
struct stock *make_structure(void)
{
    struct stock *a;
    a=(struct stock *)malloc(sizeof(struct stock));
    if(a==NULL)
    {
        puts("Some kind of malloc() error");
        exit(1);
    }
    return(a);
}

// prompt user for data
void fill_structure(struct stock *a,int c)
{
    printf("Item #%d/%d:\n",c,ITEMS);
    printf("Stock Symbol: ");
    scanf("%s",a->symbol);
    printf("Number of shares: ");
    scanf("%d",&a->quantity);
    printf("Share price: ");
    scanf("%f",&a->price);
}
// print data from each struct
void show_structure(struct stock *a)
{
    printf("%-6s\t%5d\t%.2f\t%.2f\n",
    a->symbol,
    a->quantity,
    a->price,
    a->quantity*a->price);
}
