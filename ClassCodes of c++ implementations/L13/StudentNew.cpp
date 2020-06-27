#include <iostream>
using namespace std;

class StudentNew {
    private :

        int rollNumber;

    public :
        int age;
        char name;
        
        // Parameterized constructor
        StudentNew(int r) {
            rollNumber = r;
        }

        // Destructor
        ~StudentNew() {
            cout << "Destructor called !" << endl;
        }

        int getRollNumber() {
            return rollNumber;
        }

        void setRollNumber(int r, int password) {
            if(password != 1234) {
                return;
            }
            if(r < 0) {
                return;
            }
            rollNumber = r;
        }
};


int main() {
    // Default constructor called
    //Student s1;
   // Student *s2 = new Student;
    
    StudentNew s1(10);
    StudentNew *s2 = new StudentNew(20);

    delete s2;

    // Copy constructor
    /*
    Student s3(s1);     
    Student s4(*s2);
    Student *s5 = new Student(s1);
    Student *s6 = new Student(*s2);

    // Copy assignment operator
    s1 = *s2;
    s3 = s1;
    (*s6) = s1;
    (*s6) = *s2;

    // Copy constructor called
    Student s7 = s1;
    */













    /*
    //cout << s1.rollNumber << endl;
    cout << s1.getRollNumber() << endl;

    // s1.rollNumber = 101;
    s1.setRollNumber(101, 1234);


    // Copy constructor
    StudentNew s3(s1);
    cout << s1.getRollNumber() << endl;
    cout << s3.getRollNumber() << endl;

    // Copy assignment operator
    s1 = s2;
    */













}

