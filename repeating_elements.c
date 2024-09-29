#include <stdio.h>

int findFirstRepeating(int arr[], int n) 
{
    // Loop to check for the first repeating element
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            // If a repeating element is found
            if (arr[i] == arr[j]) 
            {
                return i + 1;  // Returning the 1-based index of the first occurrence
            }
        }
    }
    return -1;  // If no repeating element is found
}

int main(void) 
{
    // Example 1
    int arr1[] = {1, 5, 3, 4, 3, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int result1 = findFirstRepeating(arr1, n1);
    printf("First repeating element index (Example 1): %d\n", result1);

    // Example 2
    int arr2[] = {1, 2, 3, 4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int result2 = findFirstRepeating(arr2, n2);
    printf("First repeating element index (Example 2): %d\n", result2);

}
