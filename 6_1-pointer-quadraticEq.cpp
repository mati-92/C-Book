// Solves the quadratic equations, USING pointers
// a * x * x + b * x + c = 0

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    double *root1, *root2, *a, *b, *c, *root;
    double in1, in2, in3;
    a = &in1;
    b = &in2;
    c = &in3;
    cout << "Enter the coefficients a, b, c: ";
    cin >> in1 >> in2 >> in3;
    *a = in1;
    *b = in2;
    *c = in3;
    double temp = sqrt( (*b) * (*b) - 4.0 * (*a) * (*c));
    root = &temp;
    temp = 0.5 * (*root - *b) / *a;
    root1 = &temp;
    temp = -.05 * (*root - *b) / *a;
    root2 = &temp;
    cout << " The solutions are " << *root1  << " and " << *root2 << "\n";
    cout << " The root1 address in memory is " << root1 << endl;
    return(0);

}