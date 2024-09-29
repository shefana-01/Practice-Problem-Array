#include <stdio.h>

void rotateArray(int arr[], int n) 
{
    // Store the last element
    int last = arr[n - 1];

    // Shift elements to the right
    for (int i = n - 1; i > 0; i--) 
    {
        arr[i] = arr[i - 1];
    }

    // Move the last element to the first position
    arr[0] = last;
}

int main(void) 
{
    int arr[] = {1, 2, 3, 4, 5};  // You can change this array to test other inputs
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    rotateArray(arr, n);

    printf("\nRotated array: ");
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
}
