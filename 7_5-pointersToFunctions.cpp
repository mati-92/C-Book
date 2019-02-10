#include <iostream>
#include <cstdlib>

using namespace std;

double g(int n);
double sum( double (*f)(int m), int n);

double g(int n){
    return n*n;
}

double sum(double (*f)(int m), int n){
    double temp = 0.0;
    for ( int i = 0; i < n; ++i)
        temp += (f)(i);
    return temp;
}

int main(){
    cout << sum(g, 4) << endl; // the ans is 1*1 + 2*2 + 3*3 = 14
    return (EXIT_SUCCESS);
}