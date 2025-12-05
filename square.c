#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) //rows
    {
        for(int j = 0; j < n; j++) //columns
        {
            char ch = (char)(j+64);
            printf("%c ",ch );
        }
        printf("\n");
        
    }
 return 0;
}
// This code takes an integer input 'n' representing the number of rows and columns,
// and prints a square pattern where each row contains the row number repeated 'n' times.