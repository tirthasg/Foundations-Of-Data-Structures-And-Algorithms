#include <iostream>
using namespace std;

#include "Student.cpp"

int main()
{
    Student s1;

    // s1.rollNumber = 13;
    // s1.marks = 97;

    // s1.setRollNumber(13);
    // s1.setMarks(97);
    // s1.setAge(18);
    
    // cout << s1.rollNumber << " " << s1.marks << endl;
    // cout << s1.getRollNumber() << " " << s1.getMarks() << endl;
    s1.display(); 

    Student *s2 = new Student;

    // s2 -> rollNumber = 11;
    // s2 -> marks = 91;

    // s2 -> setRollNumber(11);
    // s2 -> setMarks(91);
    // s2 -> setAge(17);

    // cout << s2 -> rollNumber << " " << s2 -> marks << endl;
    // cout << s2 -> getRollNumber() << " " << s2 -> getMarks() << endl;
    s2 -> display();

    Student s3(14, 99, 19);
    s3.display();

    Student *s4 = new Student(23, 87, 16);
    s4 -> display();

    return 0;
}