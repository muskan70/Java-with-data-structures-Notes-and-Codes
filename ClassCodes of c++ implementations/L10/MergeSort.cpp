#include <iostream>
using namespace std;

void MergeSort(int input[], int size){
    // 1. Base case
    //  
    //      // 2. Divide array in two halves and copy 
    //          //    elements
    //              
    //                  // 3. Call recursion on both halves.
    //                      
    //                          // 4. Call mergeTwoSortedArrays on both 
    //                              //    halves
    //                                  
    //                                      
    //                                              
    //                                              }
}

int subsequences(char *input, char output[][1000]) {
    // Base case
    if(input[0] == '\0') {
        output[0][0] = '\0';
        return 1;
    }

    // Recursive call
    int smallSize = subsequences(input + 1, output);

    /* Copy string A to string B
     * int i;
     * for(i = 0; A[i] != '\0'; i++) {
     *      B[i] = A[i];
     * }
     * B[i] = '\0';
     */


    // Small calculation
    for(int i = 0; i < smallSize; i++) {
        output[i + smallSize][0] = input[0];
        int j;
        // Copy string output[i] ---> output[i + smallSize]
        // A = otput[i] and B = output[i + smallSize]
        for(j = 0; output[i][j] != '\0'; j++) {
            output[i + smallSize][j+1] = output[i][j];
        }
        output[i + smallSize][j+1] = '\0';
    }
    return smallSize * 2;
}



int main() {
    char input[] = "abc";
    char output[100][1000];
    int s = subsequences(input, output);
    for(int i = 0; i < s; i++) {
        cout << output[i] << endl;
    }
}














