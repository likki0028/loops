#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if((rem%2)==0)
        {
            sum=sum+rem;
        }
        n=n/10;
    }
    printf("The sum of all even digits of the number is %d",sum);
    return 0;
}