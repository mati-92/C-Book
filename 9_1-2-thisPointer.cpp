#include <iostream>
#include <cstdlib>
using namespace std;
// we return a dereferenced pointer called this.
// The pointer, this, is a keyword, which is used 
// by the C++ compiler to point to the object that
// the function was invoked on.! 
class complex{
    friend double real(const complex & z);
    friend double imag(const complex & z);
    public:
        complex(double real = 0.0, double imag = 0.0){re = real; im = imag; total++;}
        complex(const complex &z);
        static int total_complex();
        //void operator=(const complex &z);
        complex & operator=(const complex &z);
    private: 
        double re, im;
        static int total;
};

int complex::total;

inline complex::complex(const complex &z){
    re = z.re;
    im = z.im;
}

inline int complex::total_complex(){
    return total;
}

inline complex & complex::operator=(const complex &z){
    re = z.re;
    im = z.im;
    return *this;
}

double real(const complex & z){
    return z.re;
}
double imag(const complex & z){
    return z.im;
}

/*
void complex::operator=(const complex &z){
    re = z.re;
    im = z.im;
}
*/

int main(){
    complex u(2.0, 3.0), v, w;
    w = v = u; // this pointer value is stored in w.
    cout << " real(w) : " << real(w) << "   imag(w) : " << imag(w) << endl;
}