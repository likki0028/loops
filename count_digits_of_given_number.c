#include<stdio.h>
int main()
{
    int n,rem,count=0;
    printf("enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    printf("The number of digits are %d",count);
    return 0;
}