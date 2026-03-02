#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Riya Choudhary\n");

    printf("Enter string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        i++;
    }

    printf("Length = %d\n", i);

    printf("Riya Choudhary");

    return 0;
}