#include <iostream>
using namespace std;
#include "Stack.h"

int main() {
    Stack<int> s;
    
    cout << s.size() << endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout << s.top() << endl;

    while(!s.isEmpty()) {
        cout << s.pop() << endl;
    }

}

