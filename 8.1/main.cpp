#include <iostream>
#include "main.h"

using namespace std;

int main() {
    int n, m;
    int matrix[N][N];
    cout << "Input n and m" << endl;
    cin >> n >> m;

    initMatrix(matrix, n, m);

    cout << "Matirx:" << endl;
    printMatrix(matrix, n, m);

    cout << "Maximum of Matrix: " << maxMatrix(matrix, n, m) << endl;
    cout << "Result of Matrix: " << resultMatrix(matrix, n, m) << endl;

    return 0;
}
