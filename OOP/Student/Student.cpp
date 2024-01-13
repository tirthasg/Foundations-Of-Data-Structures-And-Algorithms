class Student
{
    private:
        int age;

    public:
        int rollNumber;
        int marks;

        int getRollNumber() {
            return rollNumber;
        }

        int getMarks() {
            return marks;
        }

        int getAge() {
            return age;
        }

        void display() {
            cout << rollNumber << " " << marks << endl;
        }
};