#include <iostream>
#include <cstdlib>

// implicit conversion circumstances
// 1- function arguments 
// 2- function return values
// 3- operands

// be careful about ambiguous conversions! when a constructor 
// is defined, using a conversion function of type double would fail!

class complex{
    friend complex operator*(const complex &u, const complex &v);
    friend double real(const complex &z);
    friend double imag(const complex &z);
    public: 
        complex(double x = 0.0, double y = 0.0){re = x; im = y;}
        complex & operator=(const complex &z){ re = z.re; im = z.im; return *this;}
        complex func(const complex &z);

    private: 
        double im , re;
};

complex operator*(const complex &u, const complex &v){
    return complex(u.re*v.re, u.im*v.im);
}
double real(const complex &z){
    return z.re;
}
double imag(const complex &z){
    return z.im;
}

complex complex::func(const complex &z){
    return complex(2.*z.re, 2.*z.im);
}

int main(){
    complex u = 2;
    complex v(3,1);
    complex w = u*v;
    std::cout << "real(w) " << real(w) << "   imag(w) " << imag(w) << std::endl;
    complex q;
    //func(w); ????
    std::cout << "real(w) " << real(q) << "   imag(w) " << imag(q) << std::endl;
}