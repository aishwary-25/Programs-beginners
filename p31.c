#include<stdio.h>
int main()
{
    int a=0,b=1,c,i;
    printf("0\n");
    printf("1\n");
    for(i=1;i<=10;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}