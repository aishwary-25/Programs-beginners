// program to print 1 to n prime numbers
#include<iostream>
#include<cmath>
int main()
{
    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    for(int i=2;i<=n;i++)
    {
        bool isPrime=true;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                isPrime=false;
                break;
            }
        }
        if(isPrime)
        {
            std::cout<<i<<" ";
        }
    }
    return 0;
}D:\cpp\p1.cpp