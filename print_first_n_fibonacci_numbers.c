#include<stdio.h>
int main()
{
    int n,i,j=0,k=1,sum;
    printf("first n numbers from the fibonacci series n = ");
    scanf("%d",&n);
    printf("1 ");
    for(i=1;i<n;i++)
    {
        sum=j+k;
        j=k;
        k=sum;
        printf("%d, ",sum);
    }    
    return 0;
}