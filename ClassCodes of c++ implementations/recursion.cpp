#include <iostream>
using namespace std;

bool isSorted(int input[], int n) {
    // Special/Edge case
    if(n == 0) {
        return true;
    }
    // Base case
    if(n == 1) {
        return true;
    }

    // Small calculation
    if(input[0] > input[1]) {
        return false;
    }

    // Recursive call
    bool smallAns = isSorted(input + 1, n - 1);
    return smallAns;
}

bool isSorted_2(int *input, int n) {
    if(n <= 1) {
        return true;
    }
    if(input[n-2] > input[n-1]) {
        return false;
    }

    bool smallAns = isSorted_2(input, n-1);
    return smallAns;
}

// start = 1
void print(int n, int start = 1) {
    if(start == n + 1) {
        return;
    }
    cout << start << " ":
    print(n, start + 1);
}


void print_1(int n) {
    if(n == 0) {
        return;
    }
    print(n - 1);
    cout << n << " ";
}


















int main() {
    
}

