// Page 176
#include <iostream>
#include <cstdlib>

using namespace std;
double * f(int i){ // since the return type is a pointer to double

    double * x; // The return type is consistent with x type since return x;
    x = new double[i];
    for ( int j = 0; j < i; ++j){
        x[j] = j;
    }
    return x; // the base address of x is returned, since the function
}              // type is double * , everything is fine!

void g(int i){
    double *pt;
    pt = f(i);
    for (int j = 0; j < i; ++j){
        cout << " x["<< j <<"] = " << pt[j] << "\t";
    }
    cout << endl;
}

int main(){
    g(5);
    return(EXIT_SUCCESS);
}