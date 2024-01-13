#include <iostream>
using namespace std;

#include "Student.cpp"

int main()
{
    Student s1;

    s1.rollNumber = 13;
    s1.marks = 97;
    
    cout << s1.rollNumber << " " << s1.marks << endl;
    cout << s1.getRollNumber() << " " << s1.getMarks() << endl;
    s1.display(); 

    Student *s2 = new Student;

    s2 -> rollNumber = 11;
    s2 -> marks = 91;

    cout << s2 -> rollNumber << " " << s2 -> marks << endl;
    cout << s2 -> getRollNumber() << " " << s2 -> getMarks() << endl;
    s2 -> display();

    return 0;
}