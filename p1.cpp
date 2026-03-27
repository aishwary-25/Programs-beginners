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
}
// create class unistudent with following details with data members name, roll number,course, static int total_students . Include member functions to set and display the details of the student and static function to display total students admitted, create atleast three objects