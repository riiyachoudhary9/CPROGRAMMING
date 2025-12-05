#include <stdio.h>

int main() {
    int n,i,sum=0,a[100];
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum = %d", sum);
    return 0;
}
//WAP to calculate the sum of n numbers entered by the user
#include <stdio.h>

int main() {
    int n,i,a[100],b[100],c[100];
    scanf("%d", &n);

    for(i=0;i<n;i++) scanf("%d", &a[i]);
    for(i=0;i<n;i++) scanf("%d", &b[i]);

    for(i=0;i<n;i++){
        c[i] = a[i] + b[i];
        printf("%d ", c[i]);
    }
    return 0;
}
//WAP to add two arrays of size n
#include <stdio.h>

int main(){
    int n,i,a[100],min,max;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    min = max = a[0];

    for(i=1;i<n;i++){
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }

    printf("Min=%d Max=%d", min, max);
    return 0;
}
//WAP to find the largest and smallest number in an array