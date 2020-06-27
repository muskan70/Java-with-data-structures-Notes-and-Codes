#include <iostream>
using namespace std;

class Student {
    public :
    char *name;
    int rollNumber;

    static int totalStudents;


    // Default COnstructor
    Student() {
        totalStudents++;
       cout << "Default constructor ! " << endl; 
    }

    Student(char *name, int rollNumber) {

        // Shallow copy
        //this -> name = name;
        cout << "Parameterized constructor ! " << endl;
        this -> name = new char[strlen(name) + 1];
        strcpy(this -> name, name);
        
        //this -> rollNumber = rollNumber;
    }

    // Copy constructor
    
    Student(Student const &s) {
        cout << "Copy constructor ! " << endl;
        
        // Shallow copy
        //this -> name = s.name;
        this -> name = new char[strlen(s.name) + 1];
        strcpy(this -> name, s.name);
        
        //this -> rollNumber = s.rollNumber;
        //s.name[0] = '\0';
    }

    void fun(Student s) {
        cout << "Inside function !" << endl;
    }

    Student& test() {
        Student s("xyz", 102);
        cout << "Test : " << &s << endl;
        return s;
    }

}; 

int Student :: totalStudents = 0;



int main() {
    Student s1("abc", 101);
   
    Student s2 = s1;


    //s1.fun(s1);
    
    Student &s3 = s1.test();
    cout << "Main : " << &s3 << endl;

    s1.totalStudents = 100;
    Student :: totalStudents = 50;

    cout << Student :: totalStudents << endl;
    cout << s1.totalStudents << endl;
    

    //Student s2(s1);
}

