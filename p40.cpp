using namespace std;
#include <iostream>
int main()
{
    int n,r,rev = 0,num;
    cout << "Enter a number:";
    cin >> n;
   num= n;
    while (n > 0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if (num==rev)
        cout<<num<<"is a palindrome no."<<endl;
    else
        cout<<num<<"isnt a palindrome no."<<endl;
    return 0;
}