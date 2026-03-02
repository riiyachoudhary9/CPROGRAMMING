#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int start, end, i, j, flag;

    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++) {
        if(i > 1) {
            flag = 1;
            for(j = 2; j < i; j++) {
                if(i % j == 0) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
                printf("%d ", i);
        }
    }

    printf("\nRiya choudhary");
    return 0;
}