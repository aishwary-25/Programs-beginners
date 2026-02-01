using namespace std;
#include<iostream>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
    { cout<<"*";
    }  
      cout<<endl;
      }
     for(i=3;i>=1;i--)
    {
        for(j=1;j<=i;j++)
    { cout<<"*";
    }  
      cout<<endl;
      }
return 0;
}