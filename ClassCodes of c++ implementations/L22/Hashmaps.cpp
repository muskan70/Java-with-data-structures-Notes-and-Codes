#include <iostream>
using namespace std;
#include <unordered_map>
#include <vector>


void helper(BinaryTreeNode<int> *root, unordered_map<int, vector<int> > &m, int code) {
    if(root == NULL) {
        return;
    }

    if(m.count(code) == 1) {
        m[code].push_back(root -> data);
    }
    else {
        vector<int> v;
        v.push_back(root->data);
        m[code] = v;
    }
    helper(root -> left, m, code - 1);
    helper(root -> right, m, code + 1);
}


void printVerticalOrder(BinaryTreeNode<int> *root) {
    unordered_map<int, vector<int> > m;
    helper(root, m, 0);

    // print hashmap
}



vector<int>* removeDuplicates(int *input, int n) {
    // Create hashmap
    unordered_map<int, bool> m;
    for(int i = 0; i < n; i++) {
        m[input[i]] = true;
    }

    vector<int> *output = new vector<int>;
    for(int i = 0; i < n; i++) {
        if(m[input[i]] == true) {
            output -> push_back(input[i]);
            m[input[i]] = false;
        }
    }
    return output;
}



int main() {

    int input[] = {1, 2, 1, 1, 4, 5, 5, 0};
    vector<int> *output = removeDuplicates(input, 8);
    for(int i = 0; i < output -> size(); i++) {
        cout << output[i] << endl;
    }


    /*
    unordered_map<int, int> m;

    cout << m.size() << endl;

    m[10] = 1;
    m[20] = 10;
    m[30] = 100;
    m[40] = 1000;
    m[10] = 10000;



    cout << m[20] << endl;

    // count - to check if any key is present in hashmap or not
    cout << m.count(20) << endl;
    cout << m.count(60) << endl;
    cout << m.size() << endl;
    
    // find - to search for a key
    unordered_map<int, int> :: iterator i;
    //i = m.begin();
    for(i = m.begin(); i != m.end(); i++) {
        cout << i -> first << " " << i -> second << endl;

    }

    i = m.find(300);     
    if(i == m.end()) {
        cout << "NULL" << endl;
    }

    m.erase(20);
    cout << m.count(20) << endl;
    */


}

