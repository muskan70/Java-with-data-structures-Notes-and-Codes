#include <iostream>
using namespace std;

int main() {
    int a = 10;
    //int b;


    a = 90;

    cout << a << endl;

    int b = 3;
    cout << b << endl;
    if(a > 50) {
        int b = 6;
        cout << b << endl;
    }
    else {
        int b = 10;
        cout << b << endl;
        b = 100;
    }

    cout << b << endl;
    /*
    int i = 0;
    while(i < 3) {
        int j = 2;
        cout << j << endl;
        i++;
        j = j + 10;
    }*/

    /*
    int i;
    for(i = 0; i < 4; i++) {
        cout << i << endl;
    }
    cout << i << endl;
    */


    for(int i = 0; i < 3; i++) {
        int g = 0;
        if(i == 2) {
            int g = 3;
            cout << g << endl;
            i++;
        }
        cout << i << " " << g << endl;
    }














}
























