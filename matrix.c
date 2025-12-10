//WAP to take input in matrix and display the same matrix.also take row and column from user .display matrix should be m*n format
#include <stdio.h>
int main(){
    int a[10][10],row,col;
    printf("enter the size of row:\n");
    scanf("%d",&row);
    printf("enter the size of col:\n");
    scanf("%d",&col);
    printf("%d",a[row][col]);
    printf("enter the elements of matrix:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);}
}
    printf("the matrix is:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
        