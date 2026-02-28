#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int num, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if(original == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    printf("Riya choudhary");
    return 0;
}