#include <iostream>
using namespace std;

void keypad(int n, char output[]) {
    if(n == 0) {
        cout << output << endl;
        return;
    }

    char temp[6];
    helper(n % 10, temp);

    for(int i = 0; temp[i] != '\0'; i++) {
        char *newOutput = new char[strlen(output) + 2];
        newOutput[0] = temp[i];
        int j;
        for(j = 0; output[j] != '\0'; j++) {
            newOutput[j + 1] = output[j];
        }
        newOutput[j + 1] = '\0';
        keypad(n / 10, newOutput);
    }
}


void quickSort(int input[], int start, int end) {
    if(start >= end) {
        return;
    }

    int pivotIndex = getPivotIndex(input, start, end);
    quickSort(input, start, pivotIndex - 1);
    quickSort(input, pivotIndex + 1, end);
}





















int main() {
    
}

