#include <iostream>
#include <cstdlib>
// a friend of a class has access to the data members
// and member functions of a class.
//  "friend" keyword indicates that a function has access to
// private members of a class but is not a member of it.
using namespace std;

class complex{
    friend double real(const complex &z);
    friend double imag(const complex &z);
public:
    complex(double x = 0.0, double y = 0.0);
private: 
    double re, im;
};

inline complex::complex(double x, double y){
    re = x;
    im = y;
}

inline double real(const complex &z){
    return z.re;
}
inline double imag(const complex &z){
    return z.im;
}


int main(){
    complex z(2.0, 3.0);
    cout << "re=" << real(z) << " , im=" << imag(z) << endl;
    // Notice the difference in invoking the friend function!
    return (EXIT_SUCCESS);
}