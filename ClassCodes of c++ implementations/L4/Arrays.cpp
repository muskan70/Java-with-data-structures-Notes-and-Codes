#include <iostream>
using namespace std;


void printArray(int input[100], int n) {
    cout << "Array in function : " << sizeof(input) << endl;
    
    //int n = sizeof(input) / sizeof(int);
    for(int i = 0; i < 100; i++) {
        cout << input[i] << " ";
    }
}

int main() {
    int input[100];
    cout << input[101] << endl;


    cout << "Input : " << sizeof(input) << endl;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    printArray(input, n);
   

    



    /*
    int a = 10;
    double d = 100.3;
    char c = 'a';
    bool e = true;

    cout << "a : " << sizeof(a) << endl;
    cout << "d : " << sizeof(d) << endl;
    cout << "c : " << sizeof(c) << endl;
    cout << "e : " << sizeof(e) << endl;
    cout << "a : " << sizeof(int) << endl;
    
    cout << "Long : " << sizeof(long) << endl;
    cout << input << endl;
    */

    /*
    for(int i = 0; i < 100; i++) {
        cout << input[i] << " ";
    }
    cout << endl;
    */
}

