template <typename T>
class TreeNode {
        TreeNode<T> **children;
        int childCount;
        int capacity;

    public :

        T data;

        TreeNode(T data) {
            this -> data = data;
            children = new TreeNode<T>*[5];
            childCount = 0;
            capacity = 5;
        }


        int numChildren() {
            return childCount;
        }

        void addChild(TreeNode<T> *child) {
            // TODO - Check if children is full. If yes, make it double
            children[childCount] = child;
            childCount++;
        }

        TreeNode<T>* getChild(int i) {
            // TODO - check if i is within limits
            return children[i];
        }

        void setChild(int i, TreeNode<T> *child) {
            children[i] = child;
        }
};
