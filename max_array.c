#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    int max = -1; // Initialize max to a very small number
    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }
    
    printf("The maximum element in the array is: %d\n", max);
    return 0;
}