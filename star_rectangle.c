#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns: ");
    scanf("%d", &m);
    for(int i = 0; i < n; i++) //rows
    {
        for(int j = 0; j < m; j++) //columns
        {
            printf("* ");
        }
        printf("\n");
        
    }
 return 0;
}
// This code takes two integer inputs 'n' and 'm' representing the number of rows and columns respectively,
// and prints a rectangle pattern of asterisks (*) with 'n' rows and 'm' columns 