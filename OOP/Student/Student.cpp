class Student
{
    private:
        int age;

    public:
        int rollNumber;
        int marks;

        Student() {

        }

        Student(int rollNumber, int marks, int age) {
            this -> rollNumber = rollNumber;
            this -> marks = marks;
            this -> age = age;
        }

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
            cout << rollNumber << " " << marks << " " << age << endl;
        }

        void setRollNumber(int rNo) {
            rollNumber = rNo;
        }

        void setMarks(int m) {
            marks = m;
        }

        void setAge(int a) {
            if (a < 0)
                return;

            age = a;
        }
};