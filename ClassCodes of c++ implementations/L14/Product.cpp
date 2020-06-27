#include <iostream>
using namespace std;

class Product {
    public :
   
    const int id;

    Product(int id) : id(id) {
        //this -> id = id;
    }

    Product fun() const {
        Product p(this -> id);
        return p;
    }

};



int main() {
    Product p1(101);
    p1.fun();
    
    /*
    int t = 100;
    Product p(101, 10, t);
   // Product p1;
    */




}

