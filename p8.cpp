#include<iostream>
using namespace std;

int main()
{ 
    double islab, tax;
    cout<<"hey government employee enter your income in lacs"<<endl;
    cin>>islab;
    if(islab<2.5&&islab>0)
    {cout<<"no tax for u sir"<<endl;
    }
    else
    if(islab>=2.5&&islab<=5)
    {
        tax=0.05*islab;
        cout<<"you have to pay="<<tax<<" lacs as tax"<<endl;
    }
    else
    if(islab>=5&&islab<=10)
    {
        tax=0.20*islab;
        cout<<"you have to pay="<<tax<<" lacs as tax"<<endl;
    }
    else
    if(islab>10)
    {
        tax=0.30*islab;
        cout<<"you have to pay="<<tax<<" lacs as tax"<<endl;
    }

return 0;
    
}
   