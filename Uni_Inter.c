#include <stdio.h>
#include <stdlib.h>

// Function to check if an element is already in the union array
int isPresent(int arr[], int size, int element) 
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == element) 
        {
            return 1;  // Element is present
        }
    }
    return 0;  // Element is not present
}

// Function to find the number of distinct elements in the union of two arrays
int findUnionCount(int arr1[], int size1, int arr2[], int size2) 
{
    // Allocate memory for the union array with enough space for both arrays combined
    int *unionArr = (int *)malloc((size1 + size2) * sizeof(int));
    if (unionArr == NULL) 
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    int unionSize = 0;

    // Add all elements from arr1 to the union array if not already present
    for (int i = 0; i < size1; i++) 
    {
        if (!isPresent(unionArr, unionSize, arr1[i])) 
        {
            unionArr[unionSize++] = arr1[i];
        }
    }

    // Add all elements from arr2 to the union array if not already present
    for (int i = 0; i < size2; i++) 
    {
        if (!isPresent(unionArr, unionSize, arr2[i])) 
        {
            unionArr[unionSize++] = arr2[i];
        }
    }

    // Free the allocated memory
    free(unionArr);

    return unionSize;
}

int main(void) 
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int unionCount = findUnionCount(arr1, size1, arr2, size2);
    
    printf("Number of distinct elements in the union: %d\n", unionCount);


}
