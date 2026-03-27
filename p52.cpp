#include<iostream>
using namespace std;
class animal
{
   public:
   void sound()
   {
    cout<<"the animal makes a sound"<<endl;

   }
};
class cat:public animal
{
    public:
    void sound()
    {
        cout<< "cat meows"<<endl;

    }
};
class dog:public animal
{
    public:
    void sound()
    {
        cout<<"dohg barks"<<endl;

    }
};
class cow:public animal
{
    public:
    void sound()
    {
        cout<<"cow moos"<<endl;
    }
};
int main()
{
    animal a;
    a.sound();
    cat c;
    c.sound();
    dog d;
    d.sound();
    cow cow;
    cow.sound();
    return 0;
}
