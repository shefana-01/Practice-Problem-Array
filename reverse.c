#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseWord(char str[]) 
{
    int n = strlen(str);  // Get the length of the string
    // Using two-pointer approach to reverse the string
    for (int i = 0, j = n - 1; i < j; i++, j--) 
    {
        // Swap characters
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main(void) 
{
    char str[] = "hello";  // Declare a string in C (character array)
    
    reverseWord(str);  // Call the reverse function
    
    printf("Reversed String: %s\n", str);  // Print the reversed string
    
  
}
