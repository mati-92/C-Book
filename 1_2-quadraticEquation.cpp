// Solves the quadratic equations:
// a * x * x + b * x + c = 0

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double root1, root2, a, b, c, root;

    cout << "Enter the coefficients a, b, c: ";
    cin >> a >> b >> c;
    root = sqrt( b * b - 4.0 * a * c);
    root1 = 0.5 * (root - b) / a;
    root2 = -.05 * (root - b) / a;
    cout << " The solutions are " << root1  << " and " << root2 << "\n";
    return(0);

}