// Program to test matrix multiplication:

#include "Matrix.h"
using namespace std;

int main(){
    int i, j;
    Matrix A(6, 4), B(4, 6), C(6, 6);

    // Assign some numbers to the elements of A:
    for ( i = 1; i <= 6; ++i){
        for ( j = 1; j <= 4; ++j){
            A(i, j) = i * j;
        }
    }

 // Assign some numbers to the elements of B:

 for (i = 1; i <= 4; ++i){
    for ( j = 1 ; j <= 6; ++j){
        B(i, j) = i * j;
    }
 }

 // Multiply A and B:
 C = A * B;

 // Output the result:
 cout << C;

 return(0);
}