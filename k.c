#include <stdio.h>

int main() {
    int n, i, esum=0, osum=0;
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        if(i%2==0) esum+=i;
        else osum+=i;
    }

    printf("Even Sum = %d\nOdd Sum = %d", esum, osum);
    return 0;
}
//WAP to calculate the sum of even and odd numbers separately up to n