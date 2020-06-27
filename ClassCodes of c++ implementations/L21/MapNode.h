#include <cstring>

template <typename V>
class MapNode {
    public :
    char *key;
    V value;
    MapNode<V> *next;

    MapNode(char *key, V value) {
        //this -> key = key;
        this -> key = new char[strlen(key) + 1];
        strcpy(this -> key, key);
        this -> value = value;
        next = NULL;
    }


};
