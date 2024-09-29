#include <stdio.h>

int findFirstNonRepeating(int arr[], int n) 
{
    int i, j, found;

    for (i = 0; i < n; i++) 
    {
        found = 0;

        // Check if arr[i] is repeated in the array
        for (j = 0; j < n; j++) 
        {
            if (i != j && arr[i] == arr[j]) 
            {
                found = 1;  // Element is repeated
                break;
            }
        }

        // If the element is not repeated
        if (found == 0) 
        {
            return arr[i];
        }
    }

    return 0;  // If no non-repeating element is found
}

int main(void) 
{
    int arr[] = {-1, 2, -1, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findFirstNonRepeating(arr, n);
    
    if (result == 0) {
        printf("Output: 0 \n");  // No non-repeating element found
    } 
    else 
    {
        printf("Output: %d \n", result);  // First non-repeating element
    }

    
}
