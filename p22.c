#include<stdio.h>
int main()
{
    int i,j,f;
    for(i=1;i<=10;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        printf("%d\n",f);
    }
}