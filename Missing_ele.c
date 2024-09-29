#include <stdio.h>

int findMissingElement(int arr[], int n) 
{
    int total_sum = n * (n + 1) / 2;  // Sum of numbers from 1 to n
    int arr_sum = 0;

    // Sum of elements in the array
    for (int i = 0; i < n - 1; i++) 
    {
        arr_sum += arr[i];
    }

    // The missing number is the difference between the total sum and the array sum
    return total_sum - arr_sum;
}

int main(void) 
{
    int arr[] = {1, 2, 3, 5};  // You can change this array to test other inputs
    int n = 5;  // Total size n (which is the size of the full sequence from 1 to n)

    int missing_element = findMissingElement(arr, n);

    printf("The missing element is: %d \n", missing_element);
}
