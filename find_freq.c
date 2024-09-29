#include <stdio.h>

// Function to find the frequency of X in the array Arr
int findFrequency(int Arr[], int n, int x) 
{
    int count = 0;
    // Traverse through the array and count occurrences of X
    for (int i = 0; i < n; i++) 
    {
        if (Arr[i] == x) 
        {
            count++;
        }
    }
    return count;
}

int main(void) 
{
    int n, x;
    
    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int Arr[n];
    
    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &Arr[i]);
    }
    
    // Input the value of X to find its frequency
    printf("Enter the value of X to find its frequency: ");
    scanf("%d", &x);
    
    // Call the function to find the frequency of X
    int frequency = findFrequency(Arr, n, x);
    
    // Print the result
    printf("The frequency of %d in the array is: %d\n", x, frequency);
    
}
