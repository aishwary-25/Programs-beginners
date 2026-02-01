//print diamond pattern of stars
#include<stdio.h>
int main()
{
    int i,j,k;
    // Upper half of diamond
    for(i=1;i<=4;i++)
    {
        for(k=4;k>i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // Lower half of diamond
    for(i=3;i>=1;i--)
    {
        for(k=3;k>=i;k--)
        {
            printf(" ");
        }
        for(j=(2*i-1);j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}