#include <stdio.h>
#include <string.h>

int main() {
    printf("Riya choudhary\n");

    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);

    printf("Riya choudhary");
    return 0;
}