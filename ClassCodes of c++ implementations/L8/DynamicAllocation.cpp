#include <iostream>
using namespace std;

//int x = 7;

int* fun() {
    int *a = new int;
    *a = 10;
    return a;
}

int main() {


    int i = 4;
    i++;

    // Constant variables
    const int j = 2;
    int const z = 3;
    int const t = j;
    //j++;

    // Not allowed
    // const int k;
    // k = 10;

    int *x = &i;

    int const *y = &i;
    int const *z = y;




    cout << i << endl;
    cout << *y << endl;

    i++;

    cout << i << endl;
    cout << *y << endl;

    //(*y)++; // Not allowed
    y++;


























    /*
  //  int *y = &x;
    int *a = fun();
    cout << *a << endl;
    
    delete a;


    a = new int;

    int n;
    cin >> n;
    int *b = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    delete [] b;

    b = 0;

    //b = new int;
    */





















}

