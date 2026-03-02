#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("Alphabet\n");
    else if(ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Special Character\n");

    printf("Riya choudhary");
    return 0;
}