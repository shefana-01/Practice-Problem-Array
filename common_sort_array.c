#include <stdio.h>

// Function to find common elements in three sorted arrays
void findCommon(int arr1[], int n1, int arr2[], int n2, int arr3[], int n3) 
{
    int i = 0, j = 0, k = 0;  // Pointers for arr1, arr2 and arr3
    int found = 0;  // To check if common elements are found

    // Traverse all three arrays
    while (i < n1 && j < n2 && k < n3) 
    {
        // If the current element of arr1, arr2, and arr3 are equal, print it
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) 
        {
            // Avoid printing duplicates
            if (found == 0 || arr1[i] != arr1[i - 1]) 
            {
                printf("%d ", arr1[i]);
                found = 1;
            }
            i++;
            j++;
            k++;
        }

        // If arr1[i] is smaller, move i forward
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
            
        // If arr2[j] is smaller, move j forward
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
            
        // Else move k forward
        else
        {
            k++;
        }
            
    }

    // If no common elements were found, print -1
    if (found == 0) 
    {
        printf("-1");
    }
}

// Driver code
int main(void) 
{
    // Example 1
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    
    printf("Common elements in Example 1: ");
    findCommon(arr1, n1, arr2, n2, arr3, n3);

    // Example 2
    int arr4[] = {1, 2, 3, 4, 5};
    int arr5[] = {6, 7};
    int arr6[] = {8, 9, 10};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    int n6 = sizeof(arr6) / sizeof(arr6[0]);

    printf("Common elements in Example 2: ");
    findCommon(arr4, n4, arr5, n5, arr6, n6);

    // Example 3
    int arr7[] = {1, 1, 1, 2, 2, 2};
    int arr8[] = {1, 1, 2, 2, 2};
    int arr9[] = {1, 1, 1, 1, 2, 2, 2, 2};
    int n7 = sizeof(arr7) / sizeof(arr7[0]);
    int n8 = sizeof(arr8) / sizeof(arr8[0]);
    int n9 = sizeof(arr9) / sizeof(arr9[0]);

    printf("Common elements in Example 3: ");
    findCommon(arr7, n7, arr8, n8, arr9, n9);
}

   
