//Series is -1+2-3+4-5+....
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("enter number of terms in series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow((-1),i)*i;
    }
    printf("The sum of the series is %d",sum);
    return 0;
}