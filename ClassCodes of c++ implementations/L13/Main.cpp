#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
    Student s1(10);    
    Student *s2;

    s2 = new Student(100);

    s1.age = 10;
    s2 -> age = 20;

    delete s2;

    Student s3(10);
    Student *s4 = new Student(20);
    


}

