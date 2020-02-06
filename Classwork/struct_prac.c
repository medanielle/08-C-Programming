// # Structure exercises
/*

1. Change the source code below so that another member is added to the player structure, a float value indicating hours played.
Fix up the rest of the code so that the new value is input and displayed.

*/

#include <stdio.h>

int player_test()
{
    struct player
    {
        char name[32];
        int highscore;
        float hours;
    };
    struct player xbox;

    printf("Enter the player's name: ");
    scanf("%s",xbox.name);
    printf("Enter their high score: ");
    scanf("%d",&xbox.highscore);
    printf("Enter their hours played: ");
    scanf("%f",&xbox.hours);

    printf("Player %s has a high score of %d and played for %.2f hours\n",
            xbox.name, xbox.highscore, xbox.hours);
    return(0);
}


/*
2. Replace the name member in the human structure with a nested structure. Name that structure id and have it contain two members, char arrays, first and last( or use dynamic memory allocation) for storing an individual's first and last names. When done, the reference to the president's name will be variables president.name.first and president.name.last. Be sure to assign values to these variables in your code and 
display the results. 

*/
#include <stdio.h>
#include <string.h>

int human_test()
{
    struct date
    {
        int month;
        int day;
        int year;
    };
    struct id
    {
        char first[30];
        char last[30];
    };
    
    struct human
    {
        struct id name;
        struct date birthday;
    };
    struct human president;

    strcpy(president.name.first,"George");
    strcpy(president.name.last,"Washington");
    president.birthday.month = 2;
    president.birthday.day = 22;
    president.birthday.year = 1732;

    printf("%s %s was born on %d/%d/%d\n",
            president.name.first, president.name.last,
            president.birthday.month,
            president.birthday.day,
            president.birthday.year);

    return(0);
}

/*
3. Define a struct type with the name Length that represents a length in yards, feet, and inches. Define an add() 
function that will add two Length arguments and return the sum as type Length. 
Define a second function, show(), that will display the value of its Length argument. 
Write a program that will use the Length type and the add() and show() functions to sum 
an arbitrary number of lengths in yards, feet, and inches that are entered from the keyboard and output the total length.
*/

struct Length
{
    int yards;
    int feet;
    int inches;
}a, b, in;

struct Length add(struct Length p_len1, struct Length p_len2)
{
    struct Length sum;
    sum.yards = (p_len1.yards + p_len2.yards);
    sum.feet = (p_len1.feet + p_len2.feet);
    sum.inches = (p_len1.inches + p_len2.inches);

    return sum;
}

struct Length input()
{
    printf("Enter the yards: ");
    scanf("%d", &in.yards);
    printf("Enter the feet: ");
    scanf("%d", &in.feet);
    printf("Enter the inches: ");
    scanf("%d", &in.inches);

    return in;
}

void show_func(struct Length p_show)
{
        printf("%d yards, %d feet, and %d inches \n", p_show.yards, p_show.feet, p_show.inches);
}

int length_test()
{
    printf("enter the first length: ");
    struct Length a = input();
    printf("enter the second length: ");
    struct Length b = input();

    show_func(a);
    show_func(b);
    printf("The sum is: ");
    show_func(add(a, b));

    return 0;
}
/*
4. Define a struct type that contains a person's name consisting of a first name and a second name, 
plus the person's phone number. Use this struct in a program that will allow one or more names and 
corresponding numbers to be entered and will store the entries in an array of structures. 
The program should allow a second name to be entered and output 
all the numbers corresponding to the name, and optionally output all the names with their corresponding numbers.
*/

#include<stdio.h>

struct contact
{
    char first[30];
    char second[30];
    char phone[15];
};

struct contact get_input()
{
    struct contact new;
    printf("Enter the first name: ");
    scanf("%s", new.first);
    printf("Enter the second name: ");
    scanf("%s", new.second);
    printf("Enter the phone number: ");
    scanf("%s", new.phone);
    return new;
}
void show_contact(struct contact x)
{
    printf("Name: %s %s \t\t Phone: %s\n", x.first, x.second, x.phone);
}
int array_ex()
{
    // set up variables
    struct contact list[5];
    char again = 'y';
    int i = 0;
    //loop through all additions to the list
    while (again == 'y') {
        printf("Enter contact info:\n");
        list[i] = get_input();
        i++;
        printf("Enter y or n for more entries: \n");
        // clear the stdin
        getchar();
        again = getchar();
    }
    // iterate through list of structs
    for (; i>0;i--){
        // print each struct
        show_contact(list[i-1]); 
    }

    return 0;
}

/*
5. Write a program to compute the weekly pay for 10 machine shop workers with a 6 character ID, a 20 character name, the hours worked, and the hourly rate of pay. Compute the gross pay with 25% deductions from the gross pay for the net pay. Output the ID, name, hours worked, hourly rate of pay, gross pay, deductions, and net pay. The overtime pay rate over 40 hours is 1.5 times the hourly rate of pay. Organize the data by employee.
*/


struct employee
{
    char id[7];
    char name[21];
    float hours;
    float pay_rate;
    float gross;
    float deduction;
    float netpay;
};

void show_emp(struct employee x)
{
    printf("ID: %s, name: %s, hours worked: %.1f, hourly rate of pay: $%.2f, gross pay $%.2f, deductions: $%.2f, and net pay: $%.2f\n", x.id, x.name, x.hours, x.pay_rate, x.gross, x.deduction, x.netpay);
}

struct employee overtime(struct employee x)
{
    float ot_hours = x.hours - 40;
    x.hours = 40;
    x.gross += ot_hours * (1.5) * x.pay_rate;
    return x;
}

struct employee calc_pay(struct employee x)
{
    x.gross += x.pay_rate * x.hours;
    x.deduction = x.gross * .25;
    x.netpay = x.gross - x.deduction;
    return x;
}

int test_emp()
{
    struct employee one = {"123457", "A", 20, 10};    
    struct employee two = {"789456", "B", 45, 10};
    struct employee three = {"123457", "C", 20, 10};    
    struct employee four = {"789456", "D", 45, 10};
    struct employee five = {"123457", "E", 20, 10};    
    struct employee six = {"789456", "F", 45, 10};
    struct employee seven = {"123457", "G", 20, 10};    
    struct employee eight = {"789456", "H", 45, 10};
    struct employee nine = {"123457", "I", 20, 10};    
    struct employee ten = {"789456", "J", 45, 10};
    struct employee list[10] = {one, two, three, four, five, six, seven, eight, nine, ten};  //
    
    for (int i = 0; i<(sizeof(list)/sizeof(struct employee)); i++)
    {
        if (list[i].hours > 40){
            list[i] = overtime(list[i]);
        }
        list[i] = calc_pay(list[i]);
    }

    for (int y = 0; y<(sizeof(list)/sizeof(struct employee)); y++)
    {
        if (list[y].hours == 0){
            printf("Empty\n");
        }
        else {
            show_emp(list[y]);
        }
    }

    return 0;
}



int main()
{
    //player_test();
    //human_test();
    //length_test();
    //array_ex();
    //test_emp();
    return 0;
}
