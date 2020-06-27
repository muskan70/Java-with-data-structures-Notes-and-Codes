#include <iostream>
using namespace std;
#include <vector>


class Pair {
    public :
    Node *head;
    Node *tail;
};


Pair reverseLLRec(Node *head) {
    if(head == NULL || head -> next == NULL) {
        //return head;
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }

    Pair smallAns = reverseLLRec(head -> next);
    
    smallAns.tail -> next = head;
    head -> next = NULL;
    Pair ans;
    ans.head = smallAns.head;
    ans.tail = head;
    
    return ans;
}

Node* reverseLLRec_1(Node *head) {
    return reverseLLRec(head).head;
}

int main() {
    vector<int> v;
    cout << v[0] << endl;
    
    /*
    v[0] = 10;

    vector<int> v1(3);
    v[5] = 11;
    */












}

