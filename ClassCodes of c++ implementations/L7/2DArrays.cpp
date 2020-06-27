#include <iostream>
using namespace std;

void print(int a[][10], int m, int n) {
    
    //cout << a << " " << sizeof(a) << endl;
    
    // Print row wise
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}


int main() {
    
    int a[10] = {1, 2, 3, 4};

    int c[10][10] = {{1, 2, 3}, {5, 6, 7, 8}};

    int d[10][10] = {{0}};
    
    int a[10][10];

    int m, n;

    cin >> m >> n;  // m = 2, n = 3

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    print(a, m, n);
}

