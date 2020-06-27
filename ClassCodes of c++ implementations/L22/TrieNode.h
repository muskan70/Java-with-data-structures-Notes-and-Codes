#include <unordered_map>

class TrieNode {
    public :

        char data;
        bool isTerminal;
        unordered_map<char, TrieNode*> children;

        TrieNode(char data) {
            this -> data = data;
            isTerminal = false;

        }
};
