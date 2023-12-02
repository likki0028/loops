#include<stdio.h>
int main()
{
    int n,i,j=0,k=1,sum;
    printf("which number do you need from the fibonacci series : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=j+k;
        j=k;
        k=sum;
    }
    printf("%d ",sum);
    return 0;
}