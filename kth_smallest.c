#include <stdio.h>

// A utility function to swap two elements
void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function similar to the one used in quicksort
int partition(int arr[], int low, int high) 
{
    int pivot = arr[high]; // pivot
    int i = low;           // Index of smaller element
    
    for (int j = low; j < high; j++) 
    {
        if (arr[j] < pivot) 
        {
            swap(&arr[i], &arr[j]);
            i++; // increment index of smaller element
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}

// This function returns the k-th smallest element in the array
int quickSelect(int arr[], int low, int high, int k) 
{
    if (low <= high) 
    {
        // Find the partition index
        int pi = partition(arr, low, high);
        
        // If the partition index matches k, we have found the k-th smallest
        if (pi == k)
        {
            return arr[pi];
        }
        
            
        // If k is smaller, look in the left part of the array
        if (pi > k)
        {
            return quickSelect(arr, low, pi - 1, k);

        }
        
        // If k is larger, look in the right part of the array
        return quickSelect(arr, pi + 1, high, k);
    }
    
    return -1; // This should never happen if k is a valid index
}

int main(void) 
{
    int arr[] = {12, 3, 5, 7, 19, 8, 1, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;  // Example: find the 4th smallest element
    
    if (k > 0 && k <= n) 
    {
        int result = quickSelect(arr, 0, n - 1, k - 1);  // k - 1 because of 0-indexing
        printf("The %dth smallest element is %d \n", k, result);
    } 
    else 
    {
        printf("Invalid value of k \n");
    }
    
}
