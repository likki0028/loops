#include<stdio.h>
int main()
{
    int n,i,j,mul;
    printf("factorial of first n numbers n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul=1;
        for(j=1;j<=i;j++)
        {   
            mul=mul*j;
        }
        printf("factorial of %d is %d\n",i,mul);
    }
    return 0;
}