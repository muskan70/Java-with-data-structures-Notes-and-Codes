#include <iostream>
using namespace std;
#include "BinaryTreeNode.h"
#include <queue>

BinaryTreeNode<int>* takeInput() {
    int data;
    cout << "Enter root data : ";
    cin >> data;
    if(data == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(data);
    
    root -> left = takeInput();
    root -> right = takeInput();

    return root;
}

// 1 2 3 -1 4 5 -1 -1 -1 -1 6 -1 -1
BinaryTreeNode<int>* takeInputLevelWise() {
    int rootData;
    cout << "Enter root data : ";
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>* > q;
    q.push(root);

    while(!q.empty()) {
        BinaryTreeNode<int> *current = q.front();
        q.pop();
        int leftData, rightData;
        cin >> leftData;
        if(leftData != -1) {
            BinaryTreeNode<int> *left = new BinaryTreeNode<int>(leftData);
            q.push(left);
            current -> left = left;
        }
        cin >> rightData;
        if(rightData != -1) {
            BinaryTreeNode<int> *right = new BinaryTreeNode<int>(rightData);
            q.push(right);
            current -> right = right;
        }
    }
    return root;
}

void print(BinaryTreeNode<int> *root) {
    if(root == NULL) {
        return;
    }
    cout << root -> data << " : ";
    if(root -> left != NULL) {
        cout << root -> left -> data ;
    }
    cout  << ",  ";
    
    if(root -> right != NULL) {
      cout << root -> right -> data;
    }
    cout << endl;
    
    print(root -> left);
    print(root -> right);
}


int height(BinaryTreeNode<int> *root) {
    if(root == NULL) {
        return 0;
    }

    int lh = height(root -> left);
    int rh = height(root -> right);
    return max(lh, rh) + 1;
}

int diameter(BinaryTreeNode<int> *root) {
    if(root == NULL) {
        return 0;
    }
    int d1 = height(root -> left) + height(root -> right) + 1;
    int d2 = diameter(root -> left);
    int d3 = diameter(root -> right);
    return max(d1, max(d2, d3));
}

class Pair {
    public :
        int height;
        int diam;
    
        Pair(int h, int d) {
            height = h;
            diam = d;
        }
}

Pair diameterBetter(BinaryTreeNode<int> *root) {
    if(root == NULL) {
        Pair ans(0, 0);
        return ans;
    }

    Pair leftAns = diameterBetter(root -> left);
    Pair rightAns = diameterBetter(root -> right);

    int d = max(leftAns.diam, max(rightAns.diam, leftAns.height + rightAns.height + 1));

    int h = max(leftAns.height, rightAns.height) + 1;

    Pair ans(d, h);
    return ans;
}




















int main() {
    BinaryTreeNode<int> *root = takeInputLevelWise();
    print(root);
}

