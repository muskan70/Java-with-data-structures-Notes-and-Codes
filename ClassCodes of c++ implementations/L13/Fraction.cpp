#include <iostream>
using namespace std;

class Fraction {
    
    private :

        int numerator;
        int denominator;

    public:

        Fraction(int numerator, int denominator) {
            this -> numerator = numerator;
            this -> denominator = denominator;
        }

        void print() {
            cout << numerator << " / " << denominator << endl;
        }

        void simplify() {
            //int gcd = getGCD(numerator, denominator);
            int gcd = 6;
            numerator /= gcd;
            denominator /= gcd;
        }

        Fraction add(Fraction f1) {
            int lcm = this -> denominator * f1.denominator;
            int x = lcm / this -> denominator;
            int y  = lcm / f1.denominator;

            int num = x * this -> numerator + y * f1.numerator;
            int deno = lcm;
            
            Fraction f3(num, deno);
            f3.simplify();
            return f3;

        }
};

int main() {
    Fraction f1(2, 12);
    Fraction f2(5, 3);

    Fraction f3 = f1.add(f2);
    f3.print();
}
