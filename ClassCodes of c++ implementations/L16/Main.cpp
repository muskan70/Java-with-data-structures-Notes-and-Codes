#include <iostream>
using namespace std;
#include "Pair.h"
#include <vector>

/*
Pair test() {
    
}

PairDouble test2() {

}*/

int main() {

    vector<int> v(3);
    cout << v.capacity() << endl;
    cout << v[0] << " " << v[1] << " " << v[2] << endl;
    
   // v[8] = 6;
    
    v.push_back(10);
    
    //v[0] = 100;
    cout << v[7] << " " << v.size() << endl;


    /*
    Pair p1(1, 2);

    //PairGeneric<int> p2(4, 5);

    //PairGeneric<double> p3(5.6, 7.8);

    PairGeneric<int, char> p2(3, 65);

    PairGeneric<PairGeneric<int, char>, double> p4(p2, 10.7);

    PairGeneric<int, char> p6 = p4.getX();
    cout << p6.getX() << endl;

    PairGeneric<int, char> p5;
    */







}





