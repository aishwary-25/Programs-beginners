#include<stdio.h>
int main()
{
    int a,b,r;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    r=a%b;
    printf("the remainder is %d",r);
    return 0;
}