#include<stdio.h>
int sum(int a,int b)
{
    int sum=a+b;
    printf("Sum=%d\n",sum);
    return 0;

}
int main()
{
    int x,y;
    printf("Enter two numbers to add:\n");
    scanf("%d%d",&x,&y);
    sum(x,y);
    return 0;
}