

#include <stdio.h>






int BSearch(int arr[], int left, int right, int target)
{
    int middle;
    while (left <= right)
    {
        middle = left + (right - left) / 2;
        printf("middle index == %i, middle value == %i\n", middle, arr[middle]);
        if (target == arr[middle])
            return middle;
        else if (target > arr[middle])
            left = middle + 1;
        else  
            right = middle - 1;
        
            
        
    }
    printf("Not in this section\n");
}

int main() {
int searchArrays[3][10] = {
        { -30, -28, -25, -23,-18, -16, -14, -7, -2, -1 },
        { 15, 25, 37, 41, 48, 63, 78, 102, 124, 234 },
        { -5, -3, 22, 35, 48, 52, 61, 73, 83, 96 }
};



BSearch(searchArrays[0], 0, 9, 63);
BSearch(searchArrays[1], 0, 9, 63);
BSearch(searchArrays[2], 0, 9, 52);

}