#include <iostream>
using namespace std;

class Student1 {
    public :
        char *name;
        int age;
        
        Student1(char *n, int age) {
            cout << "COnstructor : " << this << endl;
            // Shallow copy
            // name = n;

            // Deep copy
            name = new char[strlen(n) + 1];
            strcpy(name, n);

            this -> age = age;
        }
};

int main() {

    char name[] = "abc";

    Student1 s1(name, 10);
    cout << "Main : " << &s1 << endl;

    /*
    name[0] = 'd';
    Student s2(name, 20);

    name[0] = 'x';
    cout << s1.name << endl;
    cout << s2.name << endl;
    */

    /*
    Student1 s1;
    Student1 s2(s1);

    cout << s1.name << endl;
    cout << s2.name << endl;
    s1.name[0] = 'x';
    cout << s1.name << endl;
    cout << s2.name << endl;
    */
    
    }

