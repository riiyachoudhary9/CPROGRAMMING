#include <stdio.h>

int main() {
    int m1,m2,m3,m4,m5;
    float per;
    scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);

    per = (m1+m2+m3+m4+m5) / 5.0;

    if(per >= 90) printf("Grade A");
    else if(per >= 80) printf("Grade B");
    else if(per >= 60) printf("Grade C");
    else printf("Grade D");

    return 0;
}
//WAP to find grade of a student based on percentage
