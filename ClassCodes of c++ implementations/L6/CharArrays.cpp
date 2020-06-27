#include <iostream>
using namespace std;
#include <cstring>

int length(char name[]) {
    int count = 0;
    for(int i = 0; name[i]; i++) {
        count++;
    }
    return count;
}


int countWords(char input[]) {
    int count = 0;
    int len = strlen(input);
    for(int i = 0; i <= len; i++) {
        if(input[i] == ' ' || input[i] == '\0') {
            count++;
        }
    }
    return count;
}

void printAllPrefixes(char input[]) {
    char current[100];
    int start = 0;
    int len = strlen(input);
    for(int end = 0; end < len; end++) {
        int j = 0;
        for(int i = start; i <= end; i++) {
            current[j++] = input[i];
        }
        current[j] = '\0';
        cout << current << endl;
    }
}


int main() {

    char input[100];
    cin.getline(input, 100, '\n');

    cout << input << endl;


    /*printAllPrefixes(input);
    cout << countWords(input) << endl;
    */
    /*

    int a[] = {1, 2, 3, 4};

    int b[10] = {1, 2, 3, 4};

    int c[100] = {1};       

    char name[10] = "abcd";

    cout << name << endl;

    for(int i = 0; i < 9; i++) {
        cout << name[i] << endl;
    }
    */
    /*

    char a[5], b[3];
    cout << "Enter a : ";
    cin >> a;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    strcpy(b, a);

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    */
    /*char name[100];
    cin >> name;

    cout << length(name) << endl;
    */

    /*
    int a[100];
   
    cout << a[100] << endl;

    // abcd

    cin >> name;

    name[2] = '\0';

    //name[4] = 'x';

    cout << name << endl;
    
    //cout << a << endl;
    */
    }

