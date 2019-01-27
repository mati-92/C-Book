#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    double x[10], y[5][10];
    cout << " The size of the array x[10] is " << sizeof(x) << endl;
    cout << " The size of the array y[5][10] is " << sizeof(y) << endl;
    cout << " The size of an elemnt of the array y[5] " << sizeof(y[0]) << endl;
    cout << " The size of a pointer to a double is " << sizeof(double*) << endl;
    cout << " The size of a double is " << sizeof(double) << endl;
    return(EXIT_SUCCESS);
}