// ## Searching Exerecises
/*
1. Create a program to search this array: {4, 6, 1, 2, 5, 3} and search for a particular number in the array. 

### Example Output
```
If the input array is {4, 6, 1, 2, 5, 3}
and if the element searched is 6,
then the expected output will be Position 2.
```
*/

// C++ code to linearly search x in arr[]. If x 
// is present then return its location, otherwise 
// return -1 
  
#include <stdio.h> 
  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}

int linear(void) 
{ 
    int arr[] = {4, 6, 1, 2, 5, 3}; 
    int x = 6; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = search(arr, n, x); 
    printf("If the input array is {");
    print_arr(arr, n);
    printf("}\n and if the element searched is %d,\n", x);

    (result == -1) ? printf("Element is not present in array") : printf("then the expected output will be Position %d.", result+1); 
    return 0; 
} 

/*
2. Find the difference between arrays:
### example Output:

``` 
Enter length of first array:4
Enter 4 elements of first array
1
2
3
4
Enter length of second array:4
Enter 4 elements of second array
2
4
5
6
The difference of the two array is:
1
3
```
*/

/*
3.  Locate unique elements in the array:

### example output
```
Enter the length of the array:5
Enter 5 elements in the array
1
2
3
2
1

The unique elements in the array are:
1
2
3
```

*/

/*
4. Change a word in a file with a different word
```
Example text: I am trying to create a file. it is through programming in C. 
It is very cold tonight, and it is snowing. do you like football? It might stop snowing. Hello, and good bye
```
### Example Output
```
Enter a string to be replaced: is
Enter the new string was
I am trying to create a file. it was through programming in C. 
It was very cold tonight, and it was snowing. do you like football? It might stop snowing. Hello, and good bye
```
*/

// #include <stdio.h> 

// int search(int arr[], int len, int num) 
// { 
//     for (int i = 0; i < len; i++) 
//         if (arr[i] == num)
//         {
//             return i;
//         }  
//     return -1; 
// } 

// int main(void) 
// { 
//     int arr[] = { 4, 6, 1, 2, 5, 3 }; 
//     int num;
//     printf("Enter a number to search for\n");
//     scanf("%d", &num);
//     int len = sizeof(arr) / sizeof(arr[0]); 
//     int result = search(arr, len, num); 
//     if (result >= 0)
//     {
//         printf("Found %d at index %d", num, result);
//     }
//     else
//     {
//         printf("Did not find %d", num);
//     }
//     return 0; 
// }

// #include <stdio.h>
// #include <stdlib.h>

// int search(int arr[], int len, int num) 
// { 
//     for (int i = 0; i < len; i++) 
//         if (arr[i] == num)
//         {
//             return i;
//         }  
//     return -1; 
// } 

// int main(void)
// {
//     printf("Enter length of first array\n");
//     int len1;
//     scanf("%d", &len1);
//     int * array1 = malloc(4 * len1);
//     printf("Enter %d elements of first array\n", len1);
//     for (int i = 0; i < len1; i++)
//     {
//         scanf("%d", &array1[i]);
//     }
//     printf("Enter length of second array\n");
//     int len2;
//     scanf("%d", &len2);
//     int * array2 = malloc(4 * len2);
//     printf("Enter %d elements of second array\n", len2);
//     for (int i = 0; i < len2; i++)
//     {
//         scanf("%d", &array2[i]);
//     }

//     printf("The numbers in the first array that aren't in the second are...\n");
//     int foundOne = 0;
//     for (int i = 0; i < len1; i++)
//     {
//         if (search(array2, len2, array1[i]) == -1)
//         {
//             printf("%d\n", array1[i]);
//             foundOne = 1;
//         }
//     }
//     if (!foundOne)
//     {
//         printf("None");
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int search(int * arr, int len, int num) 
{ 
    for (int i = 0; i < len; arr++, i++) 
        if (*arr == num)
        {
            return i;
        }
    return -1; 
} 

int howard_unique(void)
{
    printf("Enter length of array\n");
    int len;
    scanf("%d", &len);
    int * array = malloc(4 * len);
    printf("Enter %d elements of first array\n", len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("The unique elements in the array are\n");
    for (int i = 1; i < len; i++)
    {
        if (search(array+i, len - i, array[i-1]) == -1)
        {
            printf("%d\n", array[i]);
        }
    }
    return 0;
}
 int main()
 {
    linear();
    // howard_unique();
 }


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool IsNumberInArray(int number, int *array, size_t arraySize)
{
    for (size_t i = 0; i < arraySize; ++i) {
       if (array[i] == number) {
           return (true);
       }
    }

    return (false);
}

void DumpArrayContent(int *array, size_t arraySize, char *arrayName)
{
    printf("%s has %zu elements:\n", arrayName ? arrayName : "array", arraySize);               
    for (size_t i = 0; i < arraySize; ++i) {
        printf("%d ",array[i]);
    }
    printf("\n");    
}

int main(void)
{
    int arr1[] = {1,2,3,4,7,8,9};
    int arr2[] = {3,4,5};

    size_t s1 = sizeof(arr1)/sizeof(*arr1);
    size_t s2 = sizeof(arr2)/sizeof(*arr2);

    int    arr3[s1];
    int    s3 = 0;

    for (size_t i = 0; i < s1; ++i) {
        if (!IsNumberInArray(arr1[i], arr2, s2)) {
           arr3[s3] = arr1[i];
           s3++;
        }
    }

    DumpArrayContent(arr1, s1, "arr1");
    DumpArrayContent(arr2, s2, "arr2");
    DumpArrayContent(arr3, s3, "arr3");

    return 0;
} 
