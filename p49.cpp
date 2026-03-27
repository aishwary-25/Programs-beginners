// create class unistudent with following details with data members name, roll number,course, static int total_students . Include member functions to set and display the details of the student and static function to display total students admitted, create atleast three objects of the class and display their details along with total students admitted. and without constructor
#include <iostream>
#include <string>
using namespace std;
class UniStudent {
private:
    string name;
    int roll_number;
    string course;
    static int total_students;
public:
    void setDetails(string n, int r, string c) {
        name = n;
        roll_number = r;
        course = c;
        total_students++;
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Course: " << course << endl;
    }
    static void displayTotalStudents() {
        cout << "Total Students Admitted: " << total_students << endl;
    }
};
int UniStudent::total_students = 0;
int main() {
    UniStudent student1, student2, student3;

    student1.setDetails("Alice", 101, "Computer Science");
    student2.setDetails("Bob", 102, "Mechanical Engineering");
    student3.setDetails("Charlie", 103, "Electrical Engineering");

    cout << "Student 1 Details:" << endl;
    student1.displayDetails();
    cout << endl;

    cout << "Student 2 Details:" << endl;
    student2.displayDetails();
    cout << endl;

    cout << "Student 3 Details:" << endl;
    student3.displayDetails();
    cout << endl;

    UniStudent::displayTotalStudents();

    return 0;
}
