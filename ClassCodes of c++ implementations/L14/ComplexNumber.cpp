#include <iostream>
using namespace std;

class ComplexNumber {
    int real;
    int imaginary;

    public :

    ComplexNumber(int real, int i) {
        this -> real = real;
        imaginary = i;
    }

    int getReal() const {
        //this -> real = 100;
        return real;
    }

    int getimaginary() {
        return imaginary;
    }

    void setReal(int r) {
        real = r;
    }

    void setImaginary(int i) {
        imaginary = i;
    }

    ComplexNumber add(ComplexNumber c2) {
        int r = this -> real + c2.real;
        int i = this -> imaginary + c2.imaginary;
        ComplexNumber c3(r, i);
        return c3;
    }

    ComplexNumber operator+(ComplexNumber const &c2) const {
        int r = this -> real + c2.real;
        int i = this -> imaginary + c2.imaginary;
        ComplexNumber const c3(r, i);
        return c3;
    }

    void print() {
        cout << real << " + i" << imaginary << endl; 
    }

    bool operator==(ComplexNumber const &c) const {
        return this -> real == c.real && this -> imaginary == c.imaginary;
    }

    // Pre-increment operator
    ComplexNumber& operator++() {
        real++;
        imaginary++;
        return *this;
    }

    // Post-increment operator
    ComplexNumber operator++(int) {
        ComplexNumber cNew(real, imaginary);
        real++;
        imaginary++;
        return cNew;
    }


};


int main() {
    
    // int o = 2;
    // (++o)++;
    
    //++(o++);
    //(o++)++;
    cout << o << endl;
    


    ComplexNumber c1(4, 5);
    ComplexNumber c2(6, 7);
    c1.print();
   // c2.print();

    ComplexNumber c5 = ++(++c1);
    c1.print();
    c5.print();

    ComplexNumber c6 = c2++;
    c6.print();
    c2.print();
    


    int i = 2;
    ++(++i);
    cout << i << endl;


    //ComplexNumber c3 = c1 + c2;
    //c3.print();
   
    /*
    ComplexNumber *c3 = new ComplexNumber(5, 6);
    ComplexNumber *c4 = new ComplexNumber(6, 1);
    */



    if(!(c1 == c2)) {
        cout << "Equal " << endl;
    }
    else {
        cout << "Not equal " << endl;
    }



    /*
    int a = 5, b = 4;
    int c = a + b;
    int const d = 9;
    cout << (++a) << endl;
    cout << (++c) << endl;
    cout << (++d) << endl;
    cout << (++(a + b)) << endl;
    */


    /*
    cout << c1.getimaginary() << endl;
    cout << c2.getReal() << endl;

    ComplexNumber const c3 = c2;
    //c3.setImaginary(10);

    cout << c3.getReal() << endl;


    //int const a = 10;
    //a++;

    */















}

