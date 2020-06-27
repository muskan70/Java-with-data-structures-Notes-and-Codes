#include <iostream>
using namespace std;


int countChars() {
    char ch;

    int count = 0;

    //cin >> ch;
    ch = cin.get();
    
    while(ch != '$') {
        count++;
       // cin >> ch;
        ch = cin.get();

    }
    return count;
}

int main() {
    int count = countChars();
    cout << count << endl;
}

