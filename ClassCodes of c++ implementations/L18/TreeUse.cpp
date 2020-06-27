#include <iostream>
using namespace std;
#include "TreeNode.h"
#include <queue>

TreeNode<int>* takeInput() {
    int data;
    cout << "Enter root data : ";
    cin >> data;
    TreeNode<int> *root = new TreeNode<int>(data);
    int n;
    cout << "Enter number of children : ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        TreeNode<int> *child = takeInput();
        root -> addChild(child);
    }
    return root;
}     

TreeNode<int>* takeInputLevelWise() {
    int data;
    cout << "Enter root data : ";
    cin >> data;
    TreeNode<int> *root = new TreeNode<int>(data);
    queue<TreeNode<int>* > pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()) {
        TreeNode<int> *current = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter no. of children of " << current -> data << " : ";
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int childData;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            current -> addChild(child);
            pendingNodes.push(child);
        }
    }
    return root;
}


void print(TreeNode<int> *root) {
    if(root == NULL) {
        return;
    }
    cout << root -> data << " : ";
    for(int i = 0; i < root -> numChildren(); i++) {
        cout << root -> getChild(i) -> data << ", ";
    }
    cout << endl;
    for(int i = 0; i < root -> numChildren(); i++) { 
        TreeNode<int> *child = root -> getChild(i);
        print(child);
    }
}

int height(TreeNode<int> *root) {
    // Not a base case
    if(root == NULL) {
        return 0;
    }

    int ans = 0;
    for(int i = 0; i < root -> numChildren(); i++) {
        int childHeight = height(root -> getChild(i));
        if(childHeight > ans) {
            ans = childHeight;
        }
    }

    return ans + 1;
}








int main() {
    TreeNode<int> *root = takeInputLevelWise();
    print(root);



}

