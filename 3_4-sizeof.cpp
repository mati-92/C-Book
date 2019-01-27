#include <iostream>
#include <cstddef>

using namespace std;

int main(){
    size_t size;
    double x=3.14, y;
    int i=10;
    size = sizeof(char);  // Result 1
    cout << "char : \t \t" << size << "\n";
    size = sizeof(double); // Result 8
    cout << "double : \t \t" << size << "\n";
    size = sizeof x * y;  // Result 0
    cout << "(x * y) : \t \t" << size << "\n";
    size = sizeof x * i; // Result : 80
    cout << "( x * i) : \t \t" << size << "\n";
    cout << "Meysan eshgh ast \n";
}