#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int numberToBePrinted = 1;
    while(numberToBePrinted <= n) {
        cout << numberToBePrinted << endl;
        numberToBePrinted = numberToBePrinted + 1;
    }
}

