#include<stdio.h>

int main()
{
    
    int i,x,sum;
    sum=0;
    for (i=1; i<=3; i++) {
        printf("\nEisagete ton %d-o arithmo: ", i);
        scanf("%d", &x);
        sum=sum+x;
    }
    printf("\n\n%d",sum);
    
    
}
