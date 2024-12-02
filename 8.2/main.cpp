#include <iostream>
#include "main.h"

using namespace std;

int main() {
    int n, m;
    cout << "Input n and m" << endl;
    cin >> n >> m;

    int ** matrix = new int* [n];
    for(int i = 0; i < n; i++)
        matrix[i] = new int [m];

    initMatrix(matrix, n, m);

    cout << "Matirx:" << endl;
    printMatrix(matrix, n, m);

    cout << "Maximum of Matrix: " << maxMatrix(matrix, n, m) << endl;
    resultMatrix(matrix, n, m);
    deleteMatrix(matrix, n);
    return 0;
}