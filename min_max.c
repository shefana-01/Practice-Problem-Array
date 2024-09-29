#include <stdio.h>

void findMinMax(int arr[], int n, int result[]) 
{
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    
    result[0] = min;
    result[1] = max;
}

int main(void) 
{
    int arr[] = {5, 4, 3, 20, 100, 250};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[2];  

    findMinMax(arr, n, result);
    
    printf("Minimum: %d, Maximum: %d\n", result[0], result[1]);
    
}
