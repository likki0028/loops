#include<stdio.h>
int main()
{
    int i;
    char j;
    for(i=65;i<=90;i++)
    {
        j=(char)i;
        printf("%c  ",j);
        printf("%d\n",i);
    }
    return 0;
}