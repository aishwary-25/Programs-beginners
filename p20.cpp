#include<iostream>
using namespace std;
int main()
{
    int m=0,n=1,x,i;
    cout<<m<<" "<<n<<" ";
   
    for(i=2;i<=10;i++)
    {
        
        x=m+n;
        cout<<x<<" ";
        m=n;
        n=x;
    }   
}