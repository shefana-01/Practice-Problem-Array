#include <stdio.h>

void findSubarrayWithSum(int arr[], int n, int s) 
{
    int start = 0, curr_sum = arr[0];

    for (int end = 1; end <= n; end++) 
    {
        // Shrink the window from the left if current sum exceeds the required sum
        while (curr_sum > s && start < end - 1) 
        {
            curr_sum -= arr[start];
            start++;
        }

        // If we find the exact sum, print the result and return
        if (curr_sum == s) 
        {
            printf("Subarray found between indexes %d and %d\n", start + 1, end);
            return;
        }

        // Add the next element to the current sum
        if (end < n) 
        {
            curr_sum += arr[end];
        }
    }

    // If no subarray is found, return -1
    printf("-1\n");
}

int main(void) 
{
    int n, s;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Input the sum value to find
    printf("Enter the sum value: ");
    scanf("%d", &s);

    // Call the function to find the subarray with the given sum
    findSubarrayWithSum(arr, n, s);

}
