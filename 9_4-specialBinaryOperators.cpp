#include <iostream>
#include <cstdlib>

using namespace std;

// Four special operators that can only be overloaded by non-static
// member function. All of these three operators are returned by 
// reference so that it would be posibble to use them at both sides of
// assignment.

// 1 - assignment operator

// 2 - subscripting operator A[B], A is an object and B any type ( A.operaor[](B) )
// the first argument of [] is the hidden this pointer and the secons is B

// 3 - function call operator A(x, y, z) = A.operator()(a, y, z)
// A class object, x, y, z any type

// 4 - class member access operator for pointers ->

// one-dimensional array class with 3 elements
class array_3{
    public: 
        double &operator[](int i);
        // returning a reference for operator[]() ,enables us to have array 
        // objects on the left-hand side as well as the right-hand side of
        // assignment statements
        double &operator()(int i);
    private: 
        double data[3];
};


double &array_3::operator[](int i){
    if (i < 1 || i > 3){
        cout << "Index = " << i << " out of range\n";
        exit(EXIT_FAILURE);
    }
    return data[i-1];
}

double &array_3::operator()(int i){
    if (i < 1 || i > 3){
        cout << "Index = " << i << " out of range\n";
        exit(EXIT_FAILURE);
    }
    return data[i-1];
}

int main(){
    array_3 x;
    // Assign values
    for (int i = 1 ; i <= 3; ++i){
        x[i] = 10.0 * i;
    }
    // Test assignment
    for (int i = 1; i <= 3; ++i){
        cout << "x[" << i << "] = " << x[i] << "\n";
    }
        // Try setting out of bound index
    //x[0] = 3.14;
    cout << "using Function call operator, x(2) : " << x(2) << "\n";
    return (EXIT_SUCCESS);

}
