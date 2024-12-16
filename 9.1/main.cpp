#include <iostream>
#include <cmath>

#include "main.h"

using namespace std;

int main() {
    int n;
    int matrix[N][N];

    cout << "N:" << endl;
    cin >> n;

    initMatrix(matrix, n);

    cout << "Matrix:" << endl;
    printMatrix(matrix, n);
}