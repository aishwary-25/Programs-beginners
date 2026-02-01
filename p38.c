#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=5;k>(i/2);k--)
        { 
            printf(" ");
            if(k%2==0)
                printf(" ");
        }
        for(j=1;j<=(i);j++)
        {
            printf("*");
        }
        printf("\n");
    }
}