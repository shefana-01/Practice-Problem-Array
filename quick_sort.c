#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// This function takes the last element as the pivot, places it in the correct position in the sorted array,
// and places all smaller elements to the left of the pivot and all larger elements to the right of the pivot.
int partition(int arr[], int low, int high) 
{
    int pivot = arr[high];  // Taking the last element as pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high - 1; j++) 
    {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) 
        {
            i++;  // Increment the index of the smaller element
            swap(&arr[i], &arr[j]);  // Swap the smaller element with arr[i]
        }
    }
    // Swap the pivot element with the element at i+1 to put the pivot in the correct position
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);  // Return the index of the pivot
}

// Function to implement QuickSort
void quickSort(int arr[], int low, int high) 
{
    if (low < high) 
    {
        // pi is partitioning index, arr[pi] is now in the right place
        int pi = partition(arr, low, high);

        // Separately sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
}

// Driver code
int main(void) 
{
    // Example 1
    int arr1[] = {4, 1, 3, 9, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    quickSort(arr1, 0, n1 - 1);
    printf("Sorted array: ");
    printArray(arr1, n1);
    printf("\n");

    // Example 2
    int arr2[] = {2, 1, 6, 10, 4, 1, 3, 9, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    quickSort(arr2, 0, n2 - 1);
    printf("Sorted array: ");
    printArray(arr2, n2);
    printf("\n");

    int arr3[] = {2, 6, 15, 21, 73, 8, 43};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    quickSort(arr3, 0, n3 - 1);
    printf("Sorted array: ");
    printArray(arr3, n3);
    printf("\n");

}
