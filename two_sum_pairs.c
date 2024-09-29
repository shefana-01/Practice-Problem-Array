#include <stdio.h>

void sortArray(int arr[], int n) 
{
    // Simple Bubble Sort to sort the array
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void findPairs(int arr[], int n) 
{
    // First sort the array
    sortArray(arr, n);
    
    printf("Unique pairs with sum 0:\n");
    
    for (int i = 0; i < n - 1; i++) 
    {
        // Skip duplicate elements to avoid repeated pairs
        if (i > 0 && arr[i] == arr[i - 1]) 
        {
            continue;
        }
        
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] + arr[j] == 0) 
            {
                printf("[%d, %d]\n", arr[i], arr[j]);
                break;  // Since the array is sorted, we don't need to check further after finding a pair
            }
        }
    }
}

int main(void) 
{
    int arr[] = {-1, 0, 1, 2, -1, -4};  // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    findPairs(arr, n);

}
