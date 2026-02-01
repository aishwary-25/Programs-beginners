#include<iostream>
using namespace std;
int main()
{
    int i, j, c, n;
    cout<<"enter end number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(n%j==0)
            {
                c++;
            }
            if(c==1)
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}