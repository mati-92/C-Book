#include <iostream>
#include <cstdlib>

using namespace std;

class complex {
    public: 
        complex(double x = 0.0, double y = 0.0);
        complex(const complex &z){re = z.re; im = z.im;}
        double real(void) const;
        double imag(void) const;
    private: 
        double re, im;
};

inline double complex::real(void) const{
    return re;
    }
inline double complex::imag(void) const{
    return im;
}

int main(){

    const complex i(0.0, 1.0);
    cout << i.real() << endl;
    // with "double real(void) {return re;}"
    //cout << "real part of i = " << i.real();
    // ERROR: beacuse it's not clear wheter or not
    // real() modifies i which is type const or not.
    // SOLUTION: const specifier at the end of the function
    return(EXIT_SUCCESS);
}