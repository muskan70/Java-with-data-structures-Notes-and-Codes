#include <iostream>
using namespace std;

int main() {
    int a = 4, b = 5;

    cout << (a & b) << endl;
    cout << (a && b) << endl;

    int x = 2;

    x = 1 << x;
    cout << x << endl;

    int y = 10;
    y = y >> 1;
    cout << y << endl;


}

