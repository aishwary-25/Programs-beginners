using namespace std;
#include<iostream>
int main()
{
    int a=0,b=1,c;
    cout<<a<<","<<b<<",";
    for(int i=2;i<10;i++)
    {
        c=a+b;
        cout<<c<<",";
        a=b;
        b=c;
    }
}