#include <iostream>
#include <cmath>
#include "main.h"

using namespace std;

void initMatrix(int (&a)[N][N], int n) {
    for(int i = 0; i < n; i++)
        a[i][n-1-i] = pow(i >= n / 2 ? (n-i) : (i+1), 2);
}

void printMatrix(int (&a)[N][N], int n) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}