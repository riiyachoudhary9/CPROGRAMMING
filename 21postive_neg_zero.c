#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
        printf("Positive\n");
    else if(num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    printf("Riya choudhary");
    return 0;
}