#include <iostream>
using namespace std;

class Pair {

    static int id;

    public :
    int a;
    bool b;
};

int Pair :: id = 101;


Pair fun() {

}



int main() {
    /*
    Pair p = fun();
    cout << p.a << endl;
    cout << p.b << endl;
    */
    
    cout << Pair :: id << endl;


}

