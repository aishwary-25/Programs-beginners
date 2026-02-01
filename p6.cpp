#include<iostream>
#include<iomanip>
using namespace std;

int main()
{ 
    int a=4;
    int b=73;
    int c=1357;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<"........\n";
    cout<<setw(a)<<a<<endl;
    cout<<setw(b)<<b<<endl;
    cout<<setw(c)<<c<<endl;

    return 0;
}
