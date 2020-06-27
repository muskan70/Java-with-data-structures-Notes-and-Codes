#include "MapNode.h"

template <typename V>
class HashMap {
    MapNode<V> **data;
    int tableSize;
    int count;

    int getArrayIndex(char *key) {
        int len = strlen(key);
        int ans = 0;
        int p = 1;  // 29^0
        for(int i = len - 1; i >= 0; i--) {
            ans += key[i] * p;
            p *= 29;
        }
        return ans % tableSize;
    }

    void rehash() {
        MapNode<V> **temp = data;
        data = new MapNode<V>*[2 * tableSize];

        for(int i = 0; i < 2*tableSize; i++) {
            data[i] = NULL;
        }

        count = 0;
        int p = tableSize;
        tableSize *= 2;
        for(int i = 0; i < p; i++) {
            MapNode<V> *head = temp[i];
            while(head != NULL) {
                insert(head -> key, head -> value);
                head = head -> next;
            }
        }
        // TODO - deallocate temp array
    }

    public :

    HashMap() {
        data = new MapNode<V>*[7];
        tableSize = 7;
        for(int i = 0; i < tableSize; i++) {
            data[i] = NULL;
        }
        count = 0;
    }

    void insert(char *key, V value) {
        int index = getArrayIndex(key); // hash code and compress
        MapNode<V> *head = data[index];
        while(head != NULL) {
            if(strcmp(head -> key, key) == 0) {
                head -> value = value;
                return;
            }
            head = head -> next;
        }
        
        // Insert new node
        MapNode<V> *newNode = new MapNode<V>(key, value);
        newNode -> next = data[index];
        data[index] = newNode;
        count++;

        double loadFactor = count / tableSize;
        if(loadFactor > 0.7) {
            rehash();
        }


    }

    V search(char *key) {
        int index = getArrayIndex(key); // hash code and compress
        MapNode<V> *head = data[index];
        while(head != NULL) {
            if(strcmp(head -> key, key) == 0) {
                return head -> value;
            }
            head = head -> next;
        }
        return 0;
    }

    void deleteKey(char *key) {
        int index = getArrayIndex(key); // hash code and compress
        MapNode<V> *head = data[index], *prev = NULL;
        while(head != NULL) {
            if(strcmp(head -> key, key) == 0) {
                if(prev == NULL) {
                    data[index] = head -> next;
                }
                else {
                    prev -> next = head -> next;
                }
                count--;
                delete head;
                return;
            }
            prev = head;
            head = head -> next;
        }    
    }



};
