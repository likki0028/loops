#include<stdio.h>
int main()
{
    int n,i,rem,mul=1,count=0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        rem=n%i;
        if(rem==0)
        {
            count++;
        }
        
    }
    if(count==2)
    printf("prime number");
    else
    printf("not a prime number");
    return 0;
}