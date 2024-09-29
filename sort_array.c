#include <stdio.h>

int main(void) 
{
    int arr[] = {2, 9, 5, 3}; // Example input
    int n = sizeof(arr) / sizeof(arr[0]); // Determine the number of elements
    int temp;

    // Simple Bubble Sort algorithm
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array: [");
    for (int i = 0; i < n; i++) 
    {
        printf("%d", arr[i]);
        if (i < n - 1) 
        {
            printf(", ");
        }
    }

}
