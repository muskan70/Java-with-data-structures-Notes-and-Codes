#include <iostream>
using namespace std;

// int x = main.x;
// int *y = main.(&x);
// int z = main.y;
// int &k = main.x;
void fun(int x, int *y, int z, int &k) {
    x++;
    (*y)++;
    z++;
    k++;
    k = 200;
}

int& test() {
    int i = 10;
    int *j = &i;
    cout << &i << endl;
    return i;
}

int main() {
    

    int x;
    x = 100;
    int &y = x;
    int *z = &y;
    
    int &t = test();

    cout << &t << endl;

   // int *j = test(z);
   // cout << *j << endl;



    fun(x, &x, y, x);
    cout << x << " " << y << endl;
    



    // Not allowed
    //int &y;
    //y = x;
    /*
    int i = 10;
    int *j = &i;

    //int &a = 10;    // Invalid
    int &a = i;

    cout << "&i : " << &i << endl;
    cout << "&a : " << &a << endl;

    a++;

    cout << i << endl;
    */
    //*j = 100;
    


    /*
    char c = "A";
    char *d = &c;

    
    cout << j << endl;
    cout << d << endl;
    cout << *d << endl;

    //cout << &c << endl;
    

    char y[] = "abc";
    cout << (y+1) << endl;
    */

    /*
    char a[] = "abc";

    char *b = "xyz";


    cout << a << endl;
    cout << b << endl;
    */
    }

