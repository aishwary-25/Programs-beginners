#include<iostream>
using namespace std;

int main()
{ 
    int m1, m2, m3;
cout<<"enter marks of 1"<<endl;
cin>>m1;
cout<<"enter marks of 2"<<endl;
cin>>m2;
cout<<"enter marks of 3"<<endl;
cin>>m3;

if((m1<=33||m2<=33||m3<=33)||(((m1+m2+m3)/3)<=40))
{cout<<"you are failed sir";
}
else
{cout<<"you passed out";
}
return 0;
}


