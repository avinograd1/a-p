#include <iostream>
#include <cmath>

#include "main.h"

using namespace std;

int main() {
    int n;

    cout << "N:" << endl;
    cin >> n;

    int** matrix = new int* [n];
    for(int i=0; i<n; i++)
        matrix[i] = new int [n];
    
    newInitMatrix(matrix, n);

    cout << "Matrix:" << endl;
    printMatrix(matrix, n);

    deleteMatrix(matrix, n);
    return 0;
}