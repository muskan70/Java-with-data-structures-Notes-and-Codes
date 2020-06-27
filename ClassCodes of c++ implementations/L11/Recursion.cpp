#include <iostream>
using namespace std;

void printSubsequences(char *input, char *output) {
    if(input[0] == '\0') {
        cout << output << endl;
        return;
    }

    printSubsequences(input + 1, output);

    char *newOutput = new char[strlen(output) + 2];
    int i;
    for(i = 0; output[i] != '\0'; i++) {
        newOutput[i] = output[i];
    }
    newOutput[i] = input[0];
    newOutput[i + 1] = '\0';
    
    printSubsequences(input + 1, newOutput);
}


int main() {
    char input[] = "abc";
    char output[10] = {'\0'};
    printSubsequences(input, output);
}

