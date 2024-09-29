#include <stdio.h>

void findDuplicates(int arr[], int n) 
{
    int count[n];  // Array to store count of elements
    int found = 0;  // To check if any duplicate is found

    // Initialize the count array to 0
    for (int i = 0; i < n; i++) 
    {
        count[i] = 0;
    }

    // Traverse the input array and update count array
    for (int i = 0; i < n; i++) 
    {
        count[arr[i]]++;
    }

    // Check for duplicates and print them in ascending order
    for (int i = 0; i < n; i++) 
    {
        if (count[i] > 1) 
        {
            printf("%d ", i);
            found = 1;
        }
    }

    // If no duplicate found, print -1
    if (found == 0) 
    {
        printf("-1");
    }
}

int main(void) 
{
    int arr[] = {2, 3, 11, 2, 3}; // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);
}
