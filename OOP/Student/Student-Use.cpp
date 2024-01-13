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

    Student s5(*s4);
    s5.display();

    Student *s6 = new Student(s3);
    s6 -> display();

    Student s7;
    s7 = *s6;
    s7.display();

    // Constructors: Default constructor, Parameterized constructor, Copy constructor
    // Copy assignment operator
    // Destructor

    cout << "Address of s1: " << &s1 << endl;
    cout << "Address of s2: " << s2 << endl;
    cout << "Address of s3: " << &s3 << endl;
    cout << "Address of s4: " << s4 << endl;
    cout << "Address of s5: " << &s5 << endl;
    cout << "Address of s6: " << s6 << endl;
    cout << "Address of s7: " << &s7 << endl;
    
    delete s2;
    delete s4;
    delete s6;

    Student s8; // Constructor 1
    Student s9(10); // Constructor 2
    Student s10(15, 72, 32); // Constructor 3
    
    Student s11(s10); // Copy constructor
    
    Student s12;
    s12 = s11; // Copy assignment operator

    Student s13 = s9; // Copy constructor. Not copy assignment operator

    return 0;
}