#include<iostream>
using namespace std;
int main()
{
    int i, j, k;
    for(i=1; i<=5; i++) // number of rows
    {
        for(j=5; j>i; j--) // spaces
        {
            cout<<" ";
        }
        for(k=1; k<=i; k++) // stars
        {
            cout<<"*";
        }
        cout<<endl;
    }
}