#include<stdio.h>
int main()
{
    int n,i,m;
    printf("enter the number of table ");
    scanf("%d",&n);
    printf("till which number you need the table to long ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}