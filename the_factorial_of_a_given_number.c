#include<stdio.h>
int main()
{
    int n,i,mul=1;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    printf("the factorial of %d is %d",n,mul);
    return 0;
}