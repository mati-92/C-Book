#include <iostream>
#include <cstdlib>
#include "matrix.h"

using namespace std;

int main(){
    int rows, columns;
    cout << "Enter number of rows:\n";
    cin >> rows;
    cout << "Enter number of columns:\n";
    cin >> columns;

    // create matrix
    matrix m(rows, columns);

    // assign values to elements of the matrix
    for (int i = 1; i <= rows; ++i){
        for (int j = 1; j <= columns; ++j){
            m(i, j) = 1;
        }
    }

    cout << "test assigment\n";
    for (int i = 1; i <= rows; ++i){
        for (int j = 1; j <= columns; ++j){
            cout << "m("<<i<<","<<j<<") = " << m(i, j) << endl;
        }
    }

    //matrix b(m);
    matrix c(rows, columns);
    c = m;
    cout << "test assignment operator= \n";

    for (int i = 1; i <= rows; ++i){
        for (int j = 1; j <= columns; ++j){
            cout << "c("<<i<<","<<j<<") = " << c(i, j) << endl;
        }
    }

    c = m + c;
    cout << "test addition operator+ \n";

    for (int i = 1; i <= rows; ++i){
        for (int j = 1; j <= columns; ++j){
            cout << "c("<<i<<","<<j<<") = " << c(i, j) << endl;
        }
    }
    
    // unity member function
    cout << "test unity member funcion \n";
    matrix f(3,4);
    f = f.unity(3, 4);
    for (int i = 1; i <= rows; ++i){
        for (int j = 1; j <= columns; ++j){
            cout << "f("<<i<<","<<j<<") = " << f(i, j) << endl;
        }
    }   

    return(EXIT_SUCCESS);
}