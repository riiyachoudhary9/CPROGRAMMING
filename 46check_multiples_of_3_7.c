#include <stdio.h>

int main() {
    int num;

    printf("Riya Choudhary\n");

    printf("Enter number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0)
        printf("Yes\n");
    else
        printf("No\n");

    printf("Riya Choudhary");

    return 0;
}