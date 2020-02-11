#include<stdio.h>  
struct addr   
{  
    char town[20];  
    int num;  
    char tel[14];  
};  
struct employee  
{  
    char name[20];  
    struct addr add;  
};  
void main ()  
{  
    struct employee emp;  
    printf("Enter employee DATA: \n");  
    scanf("%s %s %d %s",emp.name,emp.add.town, &emp.add.num, emp.add.tel);  
    printf("Printing the employee DATA....\n");  
    printf("name: %s\nTown: %s\nNumber: %d\nTelephone: %s",emp.name,emp.add.town,emp.add.num,emp.add.tel);  
}  