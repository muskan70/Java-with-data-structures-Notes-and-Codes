#include <iostream>
using namespace std;

void fun3() {
    cout << "3 " << endl;
}

void fun2() {
    cout << "2 " << endl;
    fun3();
}

int fun1(int a) {

    int b = a;

    a = a * 10;
    return a;

    /*
    cout << "1 " << endl;
    fun2();
    */
}

void test() {
    int i = 1;
    while(i < 5) {
        if(i == 2) {
            return;
        }
        i++;
        return;
    }
    // return;  // Not required
}

int main() {
   
    int a = 6;
    a = fun1(a);
    //cout << b << endl;

    cout << a << endl;

    
    
    cout << "Main " << endl;
   fun1();
}

