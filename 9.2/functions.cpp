#include <iostream>
#include <cmath>
#include "main.h"

using namespace std;

void newInitMatrix(int** a, int n){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n;j ++)
            a[i][j] = (j <= i);
}
void printMatrix(int** a, int n) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void deleteMatrix(int** a, int n){
    for(int i = 0; i < n; i++)
        delete[]a[i];
    delete []a;
}