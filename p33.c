#include<stdio.h>
int calfac(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int num;
    printf("Enter a number to find factorial:\n");
    scanf("%d",&num);
    printf("Factorial=%d\n",calfac(num));
    return 0;
}


