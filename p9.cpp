
// a leap year is divisible by 400
// not by 100
//  but by 4
#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year" << endl;
    cin >> year;

    if (year % 400 == 0)
    {
        cout << "It is a leap year";
    }
    else if ((year % 100) != 0 && (year % 4) == 0)
    {
        cout << "It is a leap year";
    }
    
    else
    {
        cout << "Not a leap year";
    }
    return 0;
}
