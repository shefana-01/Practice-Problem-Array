#include <stdio.h>

int countSubarrWithEqualZeroAndOne(int arr[], int n) 
{
    int sum = 0, count = 0;
    int prefixSum[1000] = {0};  // Array to store the prefix sum frequency
    prefixSum[500] = 1;  // To handle the case when subarray starts from index 0

    for (int i = 0; i < n; i++) 
    {
        // Treat 0 as -1 for calculation purposes
        if (arr[i] == 0) 
        {
            sum += -1;
        } 
        else 
        {
            sum += 1;
        }

        // Check if the prefix sum has been seen before
        if (prefixSum[sum + 500] > 0) 
        {
            count += prefixSum[sum + 500];
        }

        // Increment the frequency of this prefix sum
        prefixSum[sum + 500]++;
    }

    return count;
}

int main(void) 
{
    int arr[] = {1, 0, 0, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = countSubarrWithEqualZeroAndOne(arr, n);
    printf("Output: %d \n", result);

}
