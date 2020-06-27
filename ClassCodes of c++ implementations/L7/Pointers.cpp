#include <iostream>
using namespace std;


void test(int a, int *b) {
    a++;
    (*b)++;
    //b++;
    (*b)++;
    a++;
}

void fun(int *input, int n) {
    cout << input[0] << endl;
}

int main() {
    
    int input[10] = {1, 2, 3, 4};

    fun(input, 4);

    int a = 10;
    int *b = &a;

    b++;
    // input++;
    int *i = input + 1;

    cout << sizeof(b) << endl;
    cout << sizeof(input) << endl;

    cout << "b : " << b << endl;
    cout << "&b : " << &b << endl;
    cout << "input : " << input << endl;
    cout << "&input : " << &input << endl;



    /*
    fun(input + 1, 4);

    int a = 10;
    int *b = &a;

    test(a, b);

    cout << a << endl;
    */
    


    /*
    int input[10] = {1, 2, 3, 4};
    int a = 10;
    int *b = &a;

    cout << *b << endl;
    cout << input << endl;

    cout << *input << endl;
    cout << *(input + 1) << endl;   // input[1]
    cout << b[1] << endl;   // *(b + 0)
    */



    /*
    // &a = 180, &b = 280, &c = 380
    int a = 10;
    int *b = &a;
    int *c = b;


    b = b + 2;

    if(b > c) {
        cout << "Hey";
    }
    else {
        cout << "Hi";
    }


    cout << (c - b) << endl;
//    cout << (b + c) << endl;

    */


    /*
    b--;
    
    cout << b << endl;
    a++;

    b++;
    cout << b << endl;
    a++;
    a++;
    *c = 100;

    cout << *b << endl;
    */





    /*
    cout << c << endl;

    *c = 100;

    cout << a << endl;
    cout << *b << endl;
    cout << *c << endl;
    */

    
    /*
    cout << b << endl;
    cout << *b << endl;


    int *c = 0;     // NULL pointer
    int *d = NULL;  // NULL pointer
    */

    /*
    cout << a << endl;
    cout << b << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << *b << endl;

    int c = *b;

    c = 100;
    cout << *b << endl;
    a = 100;
    cout << *b << endl;

    // &a = 180, &b = 280
    cout << *(&b) << endl;
    cout << &(*b) << endl;
    */















}

