#include <iostream>
using namespace std;
#include <stack>
#include <queue>

int main() {
    stack<int> s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    cout << s1.size() << endl;
    cout << s1.empty() << endl;
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;


    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);

    cout << q1.front() << endl;
    q1.pop();
    cout << q1.front() << endl;








}

