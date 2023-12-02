#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("enter number of terms : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        j=pow(2,i);
        printf("%d, ",j);
    }
    return 0;
}
