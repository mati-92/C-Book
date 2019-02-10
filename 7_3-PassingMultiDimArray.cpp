#include <iostream>
#include <cstdlib>

using namespace std;

void sum(double *pt_a, double *pt_b, double *pt_c){
    double *pt_end = pt_c + 2 * 2;
    while( pt_c < pt_end)
        *pt_c++ = *pt_a++ + *pt_b++;
}

int main(){

    double a[2][2] = {{1, 1}, {1,1}};
    double b[2][2] = {{1,1}, {1,1}};
    double c[2][2] = {{0,0}, {0,0}};
    
    sum(&a[0][0], &b[0][0], &c[0][0]);

   for (int i = 0; i < 2; ++i)
        for ( int j = 0; j < 2; ++j)
            cout << "c["<<i<<"]["<<j<<"]" << c[i][j] << endl;
}
