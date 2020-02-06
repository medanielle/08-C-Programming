/*  This program prints a report with the average hurricane category          */
/*  using the data in the data file storms2.txt.                              */

#include <stdio.h>
#define FILENAME "storms2.txt"

/*  Define structure to represent a hurricane.  */

struct hurricane
{
    char name[10];
    int year, category;
};

int teach(void)
{
    /*  Define and initialize variables.  */
    struct hurricane h1;
    FILE* storms;
    double numberHurricanes = 0;
    double sumCategory = 0;

    /*  Read and process information from file.  */
    storms = fopen (FILENAME, "r");
    if (storms == NULL)
        printf("Error opening file\n");
    else
    {
        while ( fscanf(storms, "%s %d %d", h1.name, &h1.year, &h1.category) == 3 )
        {
            numberHurricanes++;
            sumCategory += h1.category;
        }
        printf("Hurricane Summary for the Strongest Hurricanes in 1950 - 2002\n");
        printf("Average Category(%.1lf/%.1lf): %.1f\n", sumCategory, numberHurricanes, sumCategory/numberHurricanes);
	
      fclose(storms);
   }
   /*  Exit program.  */
   return 0;
}

/*
# Performance Lab 1

##  Write a program to read the information in storms2.txt. Use the preceding structure and print the information for the hurricanes that occurred between 1960 and 1969. Use an output format similar to the following:

```
Strongest Hurricanes between 1960 and 1969
Name  Year  Category
```
*/

#include <stdio.h>
#define FILENAME "storms2.txt"

/*  Define structure to represent a hurricane.  */

struct my_hurr
{
    char name[10];
    int year, category;
};

void show_hurr(struct my_hurr hurr)
{
    printf("%s \t\t %d \t\t %d\n", hurr.name, hurr.year, hurr.category);
}

int years_ex(void)
{
    /*  Define and initialize variables.  */
    struct my_hurr list[12] = {0};
    struct my_hurr x;
    int i = 0;
    FILE* storms;

    /*  Read and process information from file.  */
    storms = fopen (FILENAME, "r");
    if (storms == NULL)
        printf("Error opening file\n");
    else
    {
        while (fscanf(storms, "%s %d %d", x.name, &x.year, &x.category) == 3 )
        {
            if (x.year >1959 & x.year <1970){
                show_hurr(x);
                list[i] = x;
                i++;
            }
        }
    printf("Strongest Hurricanes between 1960 and 1969\n");
    printf("Name \t\t Year \t\t Category\n");
    for (int y = 0; y<sizeof(list)/sizeof(struct my_hurr); y++)
    {
        if (list[y].year == 0){
            printf("Empty\n");
        }
        else{
            show_hurr(list[y]);
        }
    }
	
      fclose(storms);
   }
   /*  Exit program.  */
   return 0;
}

/*
# Performance Lab 2

## Write a program that prints out a report giving the Maximum wave height for the tsunamis in "waves2.txt." Include the average wave height(in feet) and the location of all tsunamis with a wave height higher than the average. 

Example output:
```
Summary Information for Tsunamis
Maximum Wave height ( in feet): 101.68
Average Wave height ( in fee): 42.67
Tsunamis with greater than the average heights:
Flores_Island
Okushiri, _Japan
Eastern_Java
Papua,_New_Guinea
```
*/

#include <stdio.h>
#define FILENAME2 "waves2.txt"

struct date
{
    int month, day, year;
};
struct waves
{
    struct date event;
    int deaths;
    float height;
    char country[20];
};

int waves_ex()
{
    /*  Define and initialize variables.  */
    struct waves list[10] = {0};
    struct waves x;
    int i=0, count = 0;
    float avg = 0, sum = 0, max = 0;
    FILE* wave_info;

    /*  Read and process information from file.  */
    wave_info = fopen (FILENAME2, "r");
    if (wave_info == NULL)
        printf("Error opening file\n");
    else
    {
        while (fscanf(wave_info, "%d %d %d %d %f %s ", &x.event.month, &x.event.day, &x.event.year, &x.deaths, &x.height, x.country) == 6 )
        {
            sum += x.height;
            //printf("%f\t", x.height);
            list[count] = x;
            count++;
            if (x.height > max)
            {
                max = x.height;
            }
        }

    avg = sum/count;
    //printf("(sum)%f / (count) %d = (avg)%f", sum, count, avg);
    printf("Summary Information for Tsunamis\n");
    printf("Maximum Wave height (in feet): %.2f \n", max);
    printf("Average Wave height (in feet): %.2f \n", avg);
    printf("Tsunamis with greater than the average heights: \n");
    for (int y = 0; y<sizeof(list)/sizeof(struct waves); y++)
    {
        if (list[y].height == 0){
            printf("Empty\n");
        }
        //else{
            //printf("%s\n", list[y].country);
        //}
        else if (list[y].height > avg){
            printf("%s\n", list[y].country);
        }
    }
	
    fclose(wave_info);
    }
   /*  Exit program.  */

    return 0;
}

int main()
{
    //teach();
    //years_ex();
    waves_ex();
    return 0;
}