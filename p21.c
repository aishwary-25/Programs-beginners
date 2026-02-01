#include<iostream>
using namespace std;
int main()
{
    int m=0,n=1,x,i;
    printf("%d",m);
    printf(" ");
    printf("%d",n);
    printf(" ");

   
    for(i=2;i<=10;i++)
    {
        
        x=m+n;
        printf("%d",x);
            printf(" ");
        m=n;
        n=x;
    }
    return 0;
}