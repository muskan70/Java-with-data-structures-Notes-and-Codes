#include <iostream>
using namespace std;
#include "Heap.h"
#include <queue>


int main() {

    priority_queue<int> pq;

    pq.push(10);
    pq.push(40);
    pq.push(1);
    pq.push(5);
    pq.push(12);
    pq.push(8);

    cout << pq.size() << endl;
    cout << pq.empty() << endl;
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;



    /*
    Heap<int> h;

    h.insert(10);
    h.insert(1);
    h.insert(5);
    h.insert(12);
    h.insert(6);
    h.insert(9);

    cout << h.getMin() << endl;


    cout << h.removeMin() << endl;
    cout << h.removeMin() << endl;
    cout << h.removeMin() << endl;
    cout << h.removeMin() << endl;
    cout << h.removeMin() << endl;

        */
    
    }

