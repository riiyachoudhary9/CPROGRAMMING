 #include <stdio.h>

int main() {
    int n, i;
    int even[100], odd[100], sum[100];

    printf("Enter how many elements you want: ");
    scanf("%d", &n);

    // ---------- Input Even Numbers ----------
    printf("\nEnter %d EVEN numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &even[i]);
    }

    // ---------- Input Odd Numbers ----------
    printf("\nEnter %d ODD numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &odd[i]);
    }

    // ---------- Addition of Arrays ----------
    for(i = 0; i < n; i++) {
        sum[i] = even[i] + odd[i];
    }

    // ---------- Printing Result ----------
    printf("\nAddition of Even and Odd Arrays:\n");
    for(i = 0; i < n; i++){
        printf("%d", sum[i]);}
    

    return 0;
}
// This code takes 'n' even numbers and 'n' odd numbers as input into two separate arrays,
// adds the corresponding elements of both arrays, and stores the results in a third array. Finally, it prints the elements of the resulting array.
//Write a program to perform addition of array when one array print even number and second print odd number, then Perform suggested addition