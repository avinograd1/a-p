
#include <iostream>
#include "main.h"

using namespace std;

void initMatrix(int** a, int n, int m) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
}

void printMatrix(int** a, int n, int m) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cout << a[i][j] << " ";
    cout << endl;
}

int maxMatrix(int** a, int n, int m) {
    int max = a[0][0];
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++)
            if(max < a[i][j]) max = a[i][j];
    return max;
}

void resultMatrix(int** a, int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            if (a[i][j] % 2 != 0) {
                cout << "a[" << i << "][" << j << "] = " << a[i][j] 
                     << "; Sum of i and j = " << (i + j) << endl;
                sum += (i + j);
            }
    cout << "Index sums: " << sum << endl;
}


void deleteMatrix(int** a, int n){
    for(int i = 0; i < n; i++)
        delete []a[i];
    delete []a;
}