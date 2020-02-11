// Performance labs 

/* 1. Write a C program that implements a binary search algorithm.
```
Example output:

Array: 5 10 15 20 25 26 34 56 77

Please enter the searched key: 26
The key 26 was found at 5 ( Starting from 0)

```
*/
//Iterative Example

#include<stdio.h>
#include<stdlib.h>

int binarySearch(const int *arr, int n, int k){
	int l = 0;
	int r = n-1;
	while(l <= r)
    {
		int m = (l + r) / 2;
		if(arr[m] == k){
			return m;
		}
        else if (k < arr[m])
        {
			r = m-1;
		}
        else
        {
			l = m + 1;
		}
	}
	return -1;
}

int print_arr(int *arr, int size)
{
    printf("Array: ");
    for (int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int testbin_iter(){

    int k;
    int arr[] = {5, 10, 15, 20, 25, 26, 34, 56, 77};
    int size = sizeof(arr)/sizeof(int);

    print_arr(arr, size);
    printf("Enter the searched key:\n");
    scanf("%d", &k);
	int indexOf = binarySearch(arr, size, k);
	printf("key %d was found at index %d (starting at 0)\n", k, indexOf);

	return 0;
}


/*
### 2. Search the file numbers.txt  that has a sorted 2D array. Create a program to search for a number from the file and also display something if the number is not found. 


## Real world problems in searching a file:

*/
#define FILENAME "numbers.txt"

int search(int mat[5][6], int row, int col, int k) 
{ 
    int smallest = mat[0][0], largest = mat[row - 1][col - 1]; 
    if (row == 0)
    {
        printf("matrix is empty");
        return -1; 
    }
    
    if (k < smallest || k > largest) 
    {
        printf("Key is not in range of nums");
        return -1; 
    }
    int i = 0, j = col - 1; // set indexes for top right element 
    while (i < row && j >= 0) 
    { 
        if (mat[i][j] == k) 
        { 
            printf("\n Found at %d, %d", i, j); 
            return 1; 
        } 
        if (mat[i][j] > k)
        { 
            j--; 
        }
        else // if mat[i][j] < x 
        {
            i++; 
        }
    } 
  
    printf("n Element not found"); 
    return 0; // if ( i==n || j== -1 ) 
} 

int read_2d_arr()
{
    /*  Define and initialize variables.  */
    int i=0, k;
    int arr[5][6] = {0};
    FILE* nums;

    /*  Read and process information from file.  */
    nums = fopen (FILENAME, "r");
    if (nums == NULL)
        printf("Error opening file\n");
    else
    {
        while (fscanf(nums, "%d %d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4], &arr[i][5]) == 6 )
        {
            printf("%d\t%d\t%d\t%d\t%d\t%d\t\n", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[i][5]);
            i+=1;
        }
	
    fclose(nums);
    }
    printf("Enter the searched key:\n");
    scanf("%d", &k);
    int x = search(arr, 5, 6, k);
    printf("\n'return' = %d", x);

    return 0;
}




/*
### 3. Power Plant Data. 
The data file power1.txt contains a power plant output in megawatts over a period of 8 weeks. Each row of data contains 7 integers that represent 1 weeks data. In developing the following programs, use symbolic constants NROWS and NCOLS to represent the number of rows and the number of columns in the array used to store the data.

A.)Write a program to compute and print the average power output over this period of time. Also print the number of days with greater-than-average power output.

B.) Write a program to print the day of the week and the number of the week on which the minimum power output occurred. If there are several days with the minimum power output, print the information for each day.

*/

#define FILENAME2 "power1.txt"
#define NROWS 8
#define NCOLS 7
struct day{
    int week, day, power;
};

void show_info(struct day x)
{
    printf("Week: %d \t\t Day: %d \t\t Power: %d\n", x.week, x.day, x.power);
}

int read_power()
{
    /*  Define and initialize variables.  */
    int i=0, k, sum = 0, count = 0, row = 0, avg = 0, over_avg=0, min = 500, min_count =0;
    int arr[NROWS][NCOLS] = {0};
    FILE* power;
    struct day min_power[] = {0};

    /*  Read and process information from file.  */
    power = fopen (FILENAME2, "r");
    if (power == NULL)
    {
        printf("Error opening file\n");
    }
    else
    {
        while (fscanf(power, "%d %d %d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4], &arr[i][5], &arr[i][6]) == 7 )
        {
            printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t\n", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[i][5], arr[i][6]);
            row = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3] + arr[i][4] + arr[i][5] + arr[i][6];
            sum += row;
            count +=7;
            printf("Row %d \tSum: %d\t count: %d\n", row, sum, count);
            i+=1;
        }
    }
    fclose(power);
    avg = sum/count;
    printf("Avg: %d\n", avg);

    for (int i = 0 ; i < NROWS; i++) {

        for (int j = 0; j < NCOLS; j++) {
            if (arr[i][j] > avg){
                over_avg += 1;
            }
            if (min > arr[i][j]){
                printf("(%d, %d) : %d\n", i, j, arr[i][j]);
                min = arr[i][j];
                min_power[min_count].week = i;
                min_power[min_count].day = j;
                min_power[min_count].power = arr[i][j];
                min_count +=1;
            }
            
        }
        //printf("\n");
    }
    printf("number over average: %d / min power: %d\n", over_avg, min);
    for (i = 0; i < min_count; i++){
        if (min_power[i].power == min){
            show_info(min_power[i]);
        }
    }
}

int main()
{
    // testbin_iter();
    // read_2d_arr();
    // read_power();
}