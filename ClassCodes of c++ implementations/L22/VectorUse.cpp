#include <iostream>
using namespace std;
#include <vector>


int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int> :: iterator i = v.begin();

    i = v.begin();
    v.insert(i + 3, 200);
    
    while(i != v.end()) {
        cout << *i << endl;
        i++;
    }




}

