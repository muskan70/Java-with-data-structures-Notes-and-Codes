#include <iostream>
using namespace std;

char* test() {
    //int a[100] = {1, 2, 3, 4};
    //return a;
    //
    char str[] = "abcd";
        return str;
}

int main() {
    int i = 65;
    int *j = &i;
   
    char t = 'a';
    cout << &t << endl;
    char tr[] = "anc";
    cout << tr << endl;

    char *k = (char*)j;
    cout << k[0] << endl;
    cout << k[1] << endl;
    cout << k[2] << endl;
    cout << k[3] << endl;

    /*
    cout << "j : " << j << endl;
    double *k = (double*)j;
    cout << "k : " << k << endl;

    int *l = (int*)k;

    cout << *k << endl;
    cout << *l << endl;

    double t = 100.2;
    int *s = (int*)&t;
    cout << *s << endl;


    char ch = 'A';
    char *ptr = &ch;
    cout << ptr << endl;
    
    int *yt = (int*)&ch;
    cout << yt << endl;

    void *z = (void*)&ch;
    cout << z << endl;
    //cout << *z << endl;
    */


















}

