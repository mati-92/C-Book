#include <iostream>
#include <cstring>
#include "matrix.h"

using namespace std;

matrix::matrix(matrix &a){
    m = a.m;
    n = a.n;
    memcpy(p, a.p, m * n *(sizeof(double)));
}

matrix::matrix(int rows, int columns){
    m = rows;
    n = columns;
    p = new double[m * n];
}

double &matrix::operator()(int i, int j){
    return p[i - 1 + m * (j - 1)];
}

matrix operator+(const matrix &a, const matrix &b){
    matrix c(a.m, a.n);
    for (int i = 1; i <= a.m; ++i){
        for (int j = 1; j <= a.n; ++j){
            c(i,j) = a.p[(i-1)+a.m*(j-1)] + b.p[(i-1)+b.m*(j-1)];
        }
    }
    return c;
}

void matrix::operator=(const matrix &a){
    m = a.m;
    n = a.n;
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            p[i - 1 + m * (j - 1)] = a.p[i - 1 + m * (j - 1)];
        }
    }
}

matrix matrix::unity(int rows, int columns){
    matrix c(rows, columns);
    for (int i = 1; i <= rows; ++i){
        for (int j = 1; j <= columns; ++j){
            c(i, j) = 1.0;
        }
    }
    return c;
}