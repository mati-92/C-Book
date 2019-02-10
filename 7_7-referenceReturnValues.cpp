#include <iostream>
#include <cstdlib>

using namespace std;


double & component(double *vector, int i){
    return vector[i];
}

double & component_indexing(double *vector, int i){
    return vector[i-1];
}

int main(){
    double x[10], y;
    x[4] = 4.7;
    y = component(x, 4);
    cout << " y is : " << y << endl;

    component(x, 4) = 6.5; // we can assignn to a function with reference type return
    cout << " component(x, 4) is : " << x[4] << endl;

    double a[10];
    for (int i = 1; i <= 10; ++i){
        component_indexing(a, i) = i;
        cout << "x[" << i-1 << "] is : " << a[i-1] << endl;
    }

    return(EXIT_SUCCESS);
}
