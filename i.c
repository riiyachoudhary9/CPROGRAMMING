#include <stdio.h>

int main() {
    int n, i, sum=0;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        sum += i;

    printf("Sum = %d", sum);
    return 0;
}
//WAP to calculate the sum of first n natural numbers