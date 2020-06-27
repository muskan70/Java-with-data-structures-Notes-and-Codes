#include <iostream>
using namespace std;
#include "HashMap.h"

int main() {
    HashMap<int> m;

    m.insert("abc", 10);
    m.insert("cde", 20);
    m.insert("fgh", 30);
    m.insert("ijk", 40);

    cout << m.search("cde") << endl;
    m.deleteKey("cde");
    cout << m.search("cde") << endl;

}

