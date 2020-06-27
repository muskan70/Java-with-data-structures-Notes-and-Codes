#include <iostream>
using namespace std;

void fun(int const *t) {
   // (*t)++;
}

int main() {
    int const i = 10;
    int j = i;

    int const *k = &i;

    const int *l = &j;
    
    fun(&i);
    
    
    j++;
    //(*l)++;     // Not allowed
    l++;        // Allowed
    //(*l)++;     //  Not allowed

    int * const m = &j;
    j++;
    (*m)++;
    //m++;    // Not allowed


    int const * const n = &j;
    j++;

    int e = 100;
    int const *u = &e;
    //(*u)++;
    e++;











}

