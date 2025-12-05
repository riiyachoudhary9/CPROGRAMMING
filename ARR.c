// an array in C is a collection of multiple values of the same data types stored in continuous memory location.
// This program demonstrates the declaration, initialization.
#include <stdio.h>
int main(){
    // Declaration and initialization of an array
    //indexing starts with 0
    int numbers[5] = {10, 20, 30, 40, 50};
    int arr[] = {1, 2, 3, 4, 5};
    printf("Elements of the array 'numbers':\n");
    // Accessing array elements one at a time
    printf("%d", numbers[0]); // Output: 10
    printf("\n%d", numbers[1]); // Output: 20
    // Accessing array elements using a loop
    printf("\nElements of the array 'arr':\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    // Modifying an array element
    numbers[2] = 100; // Changing the third element from 30 to 100
    // Displaying the modified array
    printf("\nModified elements of the array 'numbers':\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", numbers[i]);}
     //taking array input from user
    int userArray[3];
    printf("\nEnter 3 integers:\n");
    for(int i = 0; i < 3; i++){
        scanf("%d", &userArray[i]);
    }
    printf("You entered:\n");
    for(int i = 0; i < 3; i++){
        printf("%d ", userArray[i]);
    }
    // Output the size of the array
    printf("\nSize of 'numbers' array: %lu bytes\n", sizeof(numbers));
    printf("Size of 'arr' array: %lu bytes\n", sizeof(arr));
    
    //reverse an array
    int revArray[5] = {1, 2, 3, 4, 5};
    printf(" array:\n");
    for(int i = 0; i <= 5; i++){
        printf("%d ", revArray[i]);}
    printf("\nReversed array:\n");
    for(int i = 4; i >= 0; i--){
        printf("%d ", revArray[i]);}


   
    return 0;
}