#include <stdio.h>

void rearrangeArray(int arr[], int n) 
{
    int i, j;

    // Initialize index for positive numbers
    int pos_index = 0;

    // Iterate over the array
    for (i = 0; i < n; i++) 
    {
        if (arr[i] >= 0) 
        {
            // If the element is positive, move it to the position of pos_index
            if (i != pos_index) 
            {
                // Swap elements
                int temp = arr[i];
                arr[i] = arr[pos_index];
                arr[pos_index] = temp;
            }
            // Move pos_index to the next position
            pos_index++;
        }
    }
}

int main(void) 
{
    int arr[] = {1, -3, 5, -2, 7, -8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    rearrangeArray(arr, n);
    
    // Print the rearranged array
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    
}
