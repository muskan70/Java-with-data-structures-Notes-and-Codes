#include <iostream>
using namespace std;

int largest(int, int, int);


void xyz() {
    cout << largest(4, 1, 7);
}

int largest(int a, int b, int c) {
    if(a >= b && a >= c) {
       // cout << a << endl;
        return a;
    }
    else {
        if(b >= a && b >= c) {
            //cout << b << endl;
            return b;
        }
        else {
            //cout << c << endl;
            return c;
           }
    }
    
}

int main() {
    xyz();
    int a, b, c;
    cin >> a >> b >> c;

    cout << largest(a, b, c);


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

