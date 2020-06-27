#include <iostream>
using namespace std;

int editDistance(char *s, char *t) {
    int m = strlen(s);
    int n = strlen(t);
    if(m == 0 || n == 0) {
        return max(m, n);
    }
    
    if(s[0] == t[0]) {
        return editDistance(s+1, t+1);
    }
    else {
        int a = editDistance(s+1, t);   // insert
        int b = editDistance(s, t+1);   // delete
        int c = editDistance(s+1, t+1); // update
        return 1 + min(a, min(b, c));
    }
}

int editDistance_Iter(char *s, char *t) {
    int m = strlen(s);
    int n = strlen(t);
    int **ans = new int*[m + 1];
    for(int i = 0; i <= m; i++) {
        ans[i] = new int[n + 1];
    }
    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            ans[i][j] = -1;
        }
    }

    for(int j = 0; j <= n; j++) {
        ans[0][j] = j;
    }
    for(int i = 0; i <= m; i++) {
        ans[i][0] = i;
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(s[m - i] == t[n - j]) {
                ans[i][j] = ans[i - 1][j - 1];
            }
            else {
                int a = ans[i][j - 1];
                int b = ans[i-1][j];
                int c = ans[i-1][j-1];
                ans[i][j] = 1 + min(a, min(b, c));
            }
        }
    }
    return ans[m][n];
}

// min = INT_MIN
int LIS(int input[], int n, int min) {
    if(n == 0) {
        return 0;
    }

    int withoutFirst = LIS(input + 1, n - 1, min);
    
    int withFirst = INT_MIN;
    if(input[0] > min) {
        withFirst = LIS(input + 1, n - 1, input[0]);
    }
    
    return max(withoutFirst, withFirst + 1);
}

// minIndex = -1
int LIS_1(int input[], int n, int minIndex, int startIndex = 0) {
    if(n == startIndex) {
        return 0;
    }
    int withoutFirst = LIS_1(input, n, minIndex, startIndex+1);
    
    int withFirst = INT_MIN;
    if(minIndex < 0 || input[startIndex] > input[minIndex]) {
        withFirst = LIS_1(input, n, startIndex, startIndex +1);
    }
    
    return max(withoutFirst, withFirst + 1);
}















int main() {
    int a[] = {5, 3};
    //int a[] = {3, 1, 10, 9, 2};

    int m = -1;
    cout << LIS_1(a, 2, m, 0) << endl;



    /*
   char s[] = "abccdefdfdfabccdefdfdfabccdefdfdfabccdefdfdfabccdefdfdfabccdefdfdfabccdefdfdfabccdefdfdfabccdefdfdfabccdefdfdfabccdefdfdf";
   char t[] = "xcadfggfgxcadfggfgxcadfggfg";
   cout << editDistance_Iter(s, t) << endl;
   cout << editDistance(s, t) << endl;
    */
}






