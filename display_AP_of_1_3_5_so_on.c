#include<stdio.h>
int main()
{
    int n,i;
    printf("number of terms ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d, ",(2*i)-1);
    }
    return 0;
}