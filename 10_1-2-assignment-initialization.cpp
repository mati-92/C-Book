#include <iostream>
#include <cstdlib>

// Assignment is different from initializations.
// Assignment is a copy operation.
// The use of = symbol in declaration is not an ssignment.
// Initilizations occur:
// 1 - In object declaration
// 2 - Objects that are passed by value as a function argumnet
// 3 - Objects returned by value from a function
// Note: passing by reference is not assignment 
using namespace std;

class complex{
    friend complex operator+(const complex &u, const complex &v);
    friend double real(const complex &z);
    friend double imag(const complex &z);

    public: 
        complex(double x = 0.0, double y = 0.0);
        complex(const complex &z);
        complex &operator=(const complex &z);
        double re, im;
};

complex operator+(const complex &u, const complex &v){
    cout << "return by value, it uses complex constructor so it is initialized \n";
    return complex(u.re + v.re, u.im + v.im);
}

complex::complex(double x, double y){
    cout << "This is an intialization by passing value as a function argument\n";
    re = x;
    im = y;
}

complex::complex(const complex &z){
    re = z.re;
    im = z.im;
}

complex &complex::operator=(const complex &z){
    re = z.re;
    im = z.im;
    cout << " This is an assignment\n";
    return *this;
}

double imag(const complex &z){
    return z.im;
}

double real(const complex &z){
    return z.re;
}

int main(){
    cout << "1\n";
    complex u;

    cout << "2\n";
    u = complex(2.0, 3.0); // First the object is initialized
    // then its value is assigned to u

    cout << "3\n";
    complex v(1.0, 7.0);

    cout << "4\n";
    complex z;

    cout << "5\n";
    z = u + v;
    cout << real(z) << endl;
    cout << imag(z) << endl;

    return(EXIT_SUCCESS);
    
}