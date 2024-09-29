int peakElement(int arr[], int n) 
{
    // Edge cases for first and last elements
    if (n == 1) 
    {
        return 0; // Only one element
    }

    if (arr[0] >= arr[1]) 
    {
        return 0; // First element is a peak
    }

    if (arr[n - 1] >= arr[n - 2]) 
    {
        return n - 1; // Last element is a peak
    }
    
    // Check for peaks in the middle of the array
    for (int i = 1; i < n - 1; i++) 
    {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) 
        {
            return i; // Found a peak
        }
    }
    
    return -1; // This line will never be reached because we are guaranteed a peak
}
