#include "TrieNode.h"

class Trie {
    TrieNode *root;
    public :

    Trie() {
        root = new TrieNode('\0');
    }

    void addWord(TrieNode *root, char *word) {
        if(word[0] == '\0') {
            root -> isTerminal = true;
            return;
        }

        char currentChar = word[0];
        TrieNode *child;
        if(root -> children.count(currentChar) == 1) {
            child = root -> children[currentChar];
        }
        else {
            child = new TrieNode(currentChar);
            root -> children[currentChar] = child;
        }
        addWord(child, word + 1);
    }

    void addWord(char *word) {
        addWord(root, word);
    }

    bool search(char *word) {

    }

    void removeWord(TrieNode *root, char *word) {
        if(word[0] == '\0') {
            root -> isTerminal = false;
            return;
        }
        char currentChar = word[0];
        if(root -> children.count(currentChar) == 1) {
            TrieNode *child = root -> children[currentChar];
            removeWord(child, word + 1);
            
            if(child -> isTerminal == false && child -> children.size() == 0) {
                root -> children.erase(currentChar);
            }

        }
        else {
            return;
        }

        


    }












};
