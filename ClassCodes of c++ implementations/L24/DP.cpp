#include <iostream>
using namespace std;

int minCost(int **input, int m, int n) {
    int **ans = new int*[m];
    for(int i = 0; i < m; i++) {
        ans[i] = new int[n];
    }

    ans[0][0] = input[0][0];
    for(int j = 1; j < n; j++) {
        ans[0][j] = input[0][j] + ans[0][j - 1];
    }
    for(int i = 1; i < m; i++) {
        ans[i][0] = input[i][0] + ans[i - 1][0];
    }
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            ans[i][j] = min(ans[i][j - 1], min(ans[i-1][j-1]), ans[i-1][j]) + input[i][j];
        }
    }
    return ans[m-1][n-1];
}

int lcs_1(char *s, char *t) {
    if(s[0] == '\0' || t[0] == '\0') {
         return 0;
    }

    if(s[0] == t[0]) {
        return lcs_1(s + 1, t + 1) + 1;
    }
    else {
        int a = lcs_1(s, t + 1);
        int b = lcs_2(s + 1, t);
        return max(a, b);
    }
}

// ans array is initialized with -1
int lcs_2(char *s, char *t, int **ans) {
    if(s[0] == '\0' || t[0] == '\0') {
         return 0;
    }
    int m = strlen(s);
    int n = strlen(t);
    if(s[0] == t[0]) {
        if(ans[m - 1][n - 1] == -1) {
            ans[m-1][n-1] = lcs_2(s + 1, t + 1, ans);
        }
        ans[m][n] = ans[m-1][n-1] + 1;
    }
    else {
        if(ans[m][n-1] == -1) {
            ans[m][n-1] = lcs_1(s, t + 1);
        }
        if(ans[m-1][n] == -1) {
            ans[m-1][n] = lcs_2(s + 1, t);
        }
        ans[m][n] = max(ans[m-1][n], ans[m][n-1]);
    }
    return ans[m][n];
}















int minSteps_Iter(int n) {
    int *ans = new int[n + 1];
    ans[0] = 0;
    ans[1] = 0;

    for(int i = 2; i <= n; i++) {
        int x = ans[i - 1];
        int y = INT_MAX, z = INT_MAX;
        if(i % 2 == 0) 
            y = ans[i / 2];
        if(i % 3 == 0) 
            z = ans[i / 3];
        ans[i] = 1 + min(x, min(y, z));
    }
    return ans[n];
}

int minSteps(int n) {
    if(n <= 1) {
        return 0;
    }
    int x, y = INT_MAX, z = INT_MAX;
    x = minSteps(n - 1);
    if(n % 2 == 0) {
        y = minSteps(n / 2);
    }
    if(n % 3 == 0) {
        z = minSteps(n / 3);
    }
    return 1 + min(x, min(y, z));
}


int minSteps(int n, int *ans) {
    if(n <= 1) {
        return 0;
    }
    int x, y = INT_MAX, z = INT_MAX;
    if(ans[n - 1] == 0) {
        x = minSteps(n - 1);
        ans[n - 1] = x;
    }
    else
        x = ans[n - 1];
    if(n % 2 == 0) {
        if(ans[n / 2] == 0) {
            y = minSteps(n / 2);
            ans[n / 2] = y;
        }
        else 
            y = ans[n / 2];
    }
    if(n % 3 == 0) {
        if(ans[n / 3] == 0) {
            z = minSteps(n / 3);
            ans[n / 3] = z;
        }
        else {
            z = ans[n / 3];
        }
    }
    ans[n] = 1 + min(x, min(y, z));
    return ans[n];
}

int nthFibonacciNUmber_Iter(int n) {
    int *ans = new int[n + 1];
    ans[0] = 0;
    ans[1] = 1;

    for(int i = 2; i <= n; i++) {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    return ans[n];
}

int nthFibonacciNUmber(int n, int *ans) {
    if(n <= 1) {
        return n;
    }

    if(ans[n - 1] == 0) {
        int a = nthFibonacciNUmber(n - 1, ans);
        ans[n - 1] = a;
    }
    if(ans[n - 2] == 0) {
        int b = nthFibonacciNUmber(n - 2, ans);
        ans[n - 2] = b;
    }
    ans[n] = ans[n - 1] + ans[n - 2];
    return ans[n];
}

int nthFibonacciNUmber(int n) {
    int *ans = new int[n + 1];
    for(int i = 0; i <= n; i++) {
        ans[i] = 0;
    }
    return nthFibonacciNUmber(n, ans);
}


int main() {
    int n;
    cin >> n;
    //cout << nthFibonacciNUmber_Iter(n) << endl;
    cout << minSteps(n) << endl;
}

