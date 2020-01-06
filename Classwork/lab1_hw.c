#include <stdio.h>


int main()
{
    int num, years, weeks, days;

    printf("Enter number of days: ");
    scanf("%d", &num);

    years = num/365;
    num = num - (years * 365);
    weeks = num/7;
    days = num - (weeks * 7);

    printf("%d years, %d weeks, %d days\n", years, weeks, days);
    return 0;
}