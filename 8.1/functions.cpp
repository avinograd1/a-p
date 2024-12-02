
#include <iostream>
#include <cmath>
#include "main.h"

using namespace std;

void initMatrix(int (&a)[N][N], int n, int m) {
    srand(time(0));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            a[i][j] = 50 - rand() % 100;
}

void printMatrix(int (&a)[N][N], int n, int m) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cout << a[i][j] << " ";
    cout << endl;
}

int maxMatrix(int (&a)[N][N], int n, int m) {
    int max = a[0][0];
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++)
            if(max < a[i][j]) max = a[i][j];
    return max;
}

int resultMatrix(int (&a)[N][N], int n, int m) {
    int result = 0;
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++)
            if(a[i][j] < -10 || a[i][j] > 25) 
                result = (result == 0 ? a[i][j] : result * a[i][j]);
    return result;
}