#include <iostream>
#include <string>
using namespace std;

class UniStudent 
{
private:
    string name;
    int roll;
    string course;
    static int total_students;   // Declaration

public:
    void setdata(string n, int r, string c)
    {
        name = n;
        roll = r;
        course = c;
        total_students++;
    }

    void disp_details()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Course: " << course << endl;
    }

    static void disp_total()
    {
        cout << "Total Students Admitted: " 
             << total_students << endl;
    }
};

// Definition of static variable (THIS WAS MISSING)
int UniStudent::total_students = 0;

int main()
{
    UniStudent student1, student2, student3;

    student1.setdata("Ravi", 1000, "CSE");
    student2.setdata("Riya", 1001, "ME");
    student3.setdata("Rudra", 1002, "EE");

    cout << "Details of Student 1:" << endl;
    student1.disp_details();

    cout << "\nDetails of Student 2:" << endl;
    student2.disp_details();

    cout << "\nDetails of Student 3:" << endl;
    student3.disp_details();

    UniStudent::disp_total();

    return 0;
}.,f