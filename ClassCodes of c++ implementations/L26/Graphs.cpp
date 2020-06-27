#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void prims(int **adjacencyMatrix, int n) {
    // All of size n
        // Create isVisited array and initialize to false
        // Create Dist array and initialize to INT_MAX
        // Create final array and initialize to -1
    // Choose vertex 0 as start
    // Update its Dist and final value
    // Run a loop  n - 1 times
        // find the vertex with minimum distance value, which is not visited
        // Mark that visited. Lets say this is vertex current
        // Travel over all adjacent vertices(lets say v) of current, and check if that is not visited and the edge weight is less
        // than the current dist[v], then update dist and final
}


class Edge {
    public :
        int source;
        int dest;
        int weight;
};

int compare(const void *a, const void *b) {
    Edge *e1 = (Edge *)a;
    Edge *e2 = (Edge *)b;
    return e1 -> weight > e2 -> weight;
}

int findParent(int x, int *unionFind) {
    if(unionFind[x] == x) {
        return x;
    }
    return findParent(unionFind[x], unionFind);
}

void printKruskals(Edge *e, int n, int ed) {
    qsort(e, ed, sizeof(Edge), compare);
    
   vector<vector<int>*> ans;

   int *unionFind = new int[n];
   for(int i = 0; i < n; i++) {
       unionFind[i] = i;
   }
   int count = 0;
   int i = 0;
   while(count < n-1) {
        int source = e[i].source;
        int dest = e[i].dest;

        int sourceParent = findParent(source, unionFind);
        int destParent = findParent(dest, unionFind);

        if(sourceParent != destParent) {
            vector<int> *current = new vector<int>;
            current -> push_back(source);
            current -> push_back(dest);
            count++;
            ans.push_back(current);
            
            if(sourceParent < destParent) {
                unionFind[sourceParent] = destParent;
            }
            else {
                unionFind[destParent] = sourceParent;
            }
        }
        i++;
   }

   for(int j = 0; j < n-1; j++) {
        vector<int> *a = ans[j];
        cout << a -> at(0) << " " << a -> at(1) << endl;
   }
    cout << endl;

}

int main() {
    int n, ed;
    cin >> n >> ed;
    
    Edge *e = new Edge[ed];

    // Vertices are numbered from 0 to n - 1
    for(int i = 0; i < ed; i++) {
        int source, dest, weight;
        cin >> source >> dest >> weight;
        e[i].source = source;
        e[i].dest = dest;
        e[i].weight = weight;
    }
    printKruskals(e, n, ed);
}

