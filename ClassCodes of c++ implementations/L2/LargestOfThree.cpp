#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a >= b && a >= c) {
        cout << a << endl;
    }
    else {
        if(b >= a && b >= c) {
            cout << b << endl;
        }
        else {
            cout << c << endl;
        }
    }


    /*
    if(a >= b && a >= c) {
        cout << a << endl;
    }
    else if(b >= a && b >= c) {
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }
    */


    /*
    if(a >= b && a >= c) {
        cout << a << endl;
        return 0;       // to terminate the program
    }

    if(b >= a && b >= c) {
        cout << b << endl;
        return 0;
    }

    cout << c << endl;
    */

}

