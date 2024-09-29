#include <stdio.h>

void rearrange(int arr[], int n) 
{
    int pos[1000], neg[1000];
    int posIndex = 0, negIndex = 0;

    // Separate positive and negative elements into two arrays
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] >= 0) 
        {
            pos[posIndex++] = arr[i];  // Collect positive and 0
        } 
        else 
        {
            neg[negIndex++] = arr[i];  // Collect negative
        }
    }

    int i = 0, p = 0, q = 0;

    // Alternate positive and negative elements
    while (p < posIndex && q < negIndex) 
    {
        arr[i++] = pos[p++];
        arr[i++] = neg[q++];
    }

    // If any positive numbers are left, add them to the array
    while (p < posIndex) 
    {
        arr[i++] = pos[p++];
    }

    // If any negative numbers are left, add them to the array
    while (q < negIndex) 
    {
        arr[i++] = neg[q++];
    }
}

int main(void) 
{
    int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    printf("Output: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
