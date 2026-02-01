#include<stdio.h>
int sum(int x, int y)
{
    int z=x+y;
    return z;

}
 int main()
 {
    int a,b;
    printf("Enter two numbers to add:\n");
    scanf("%d%d",&a,&b);
    printf("Sum=%d\n",sum(a,b));
    return 0;
 }