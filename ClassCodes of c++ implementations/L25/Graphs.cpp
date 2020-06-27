#include <iostream>
using namespace std;
#include <unordered_map>
#include <vector>
#include <queue>

void bfsTraversal(unordered_map<int, vector<int>* > adjacencyList) {
    unordered_map<int, bool> visited;

    queue<int> q;
    q.push(1);
    while(!q.empty()) {
        int current = q.front();
        q.pop();
        if(visited.count(current) == 0) { 
            cout << current << " ";
            visited[current] = true;

            vector<int> *adjVertices = adjacencyList[current]; 
            for(int i = 0; i < adjVertices -> size(); i++) {
                if(visited.count(adjVertices -> at(i)) == 0) {
                    q.push(adjVertices -> at(i));
                }
            }
        }
    }
}

void printDFSHelper(unordered_map<int, vector<int>* > adjacencyList, int     n, int e, unordered_map<int, bool> &visited, int start = 1) {
    cout << start << " ";
    visited[start] = true;
    vector<int> *adjVertices = adjacencyList[start];
    for(int i = 0; i < adjVertices -> size(); i++) {
        if(visited.count(adjVertices -> at(i)) == 0) {
            printDFSHelper(adjacencyList, n, e, visited, adjVertices -> at(i));
        }
    }
}

void printDFS(unordered_map<int, vector<int>* > adjacencyList, int n, int e) {
    unordered_map<int, bool> visited;

    int start = 0;
    while(visited.size() < n) {
        for(int i = 1; i <= n; i++) {
            if(visited.count(i) == 0) {
                printDFSHelper(adjacencyList, n, e, visited, i);
            }
        }

    }
}



int main() {
    int n, e;
    cin >> n >> e;

    unordered_map<int, vector<int>* > adjacencyList;
    int count = 1;
    while(count <= e) {
        int source, dest;
        cin >> source >> dest;

        if(adjacencyList.count(source) == 1) {
            adjacencyList[source] -> push_back(dest);
        }
        else {
            vector<int> *b = new vector<int>;
            b -> push_back(dest);
            adjacencyList[source] = b;
        }
        if(adjacencyList.count(dest) == 1) {
            adjacencyList[dest] -> push_back(source);
        }
        else {
            vector<int> *b = new vector<int>;
            b -> push_back(source);
            adjacencyList[dest] = b;
        }
        count++;
    }

    printDFS(adjacencyList, n, e);
    bfsTraversal(adjacencyList);
}






