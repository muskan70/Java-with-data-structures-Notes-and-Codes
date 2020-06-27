#include <iostream>
using namespace std;

void inorderTraversal(BinaryTreeNode<int> *root) {
    if(root == NULL) {
        return;
    }
    inorderTraversal(root -> left);
    cout << root -> data << " ";
    inorderTraversal(root -> right);
}

bool checkBST(BinaryTreeNode<int> *root) {
    if(root == NULL) {
        return true;
    }
    int leftMax = findMax(root -> left);
    int rightMin = findMin(root -> right);
    if(root -> data > leftMax && root -> data < rightMin) {
        return checkBST(root -> left) && checkBST(root -> right);
    }
    else {
        return false;
    }
}

class CheckBST {
    public :
        bool isBST;
        int max;
        int min;
};

CheckBST isBSTBetter(BinaryTreeNode<int> *root) {
    if(root == NULL) {
        CheckBST ans;
        ans.isBST = true;
        ans.max = INT_MIN;
        ans.min = INT_MAX;
        return ans;
    }

    CheckBST leftAns = isBSTBetter(root -> left);
    CheckBST rightAns = isBSTBetter(root -> right);

    CheckBST ans;
    ans.max = max(leftAns.max, max(root -> data, rightAns.max));
    ans.min = min(leftAns.min, min(root -> data, rightAns.min));
    
    if(leftAns.isBST && rightAns.isBST && root -> data > leftAns.max && root -> data < rightAns.min) {
        ans.isBST = true;
    }
    else {
        ans.isBST = false;
    }
    return ans;


}

bool checkBST_3(BinaryTreeNode<int> *root, int max, int min) {
    if(root == NULL) {
        return true;
    }

    if(root -> data > max || root -> data < min) {
        return false;
    }

    bool leftAns = checkBST_3(root -> left, root -> data, min);
    bool rightAns = checkBST_3(root -> right, max, root -> data);
    return leftAns && rightAns;
}




























int main() {
    
}

