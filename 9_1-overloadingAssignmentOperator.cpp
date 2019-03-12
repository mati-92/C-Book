#include<iostream>
#include<cstdlib>

using namespace std;

class complex{
    friend double real(const complex&z){return z.re;}
    friend double imag(const complex&z){return z.im;}
    public: 
        complex(double real = 0.0, double imag = 0.0){re = real; im = imag; total++;}
        complex(const complex &z){re = z.re; im = z.im;} 
        double real(void) const{return re;}
        double imag(void) const {return im;}
        static int total_complex(void){return total;}
        void operator=(const complex&z){re = z.re; im = z.im;}
        // The assignment operator is a binary operator, but only one operand 
        // (the second) is given explicitly, since the first operand is implicit.
        // the second operand is u, the expression re and im (without class 
        // member operator) are the data members of v.
        // Beacuas the operator is a member function, it has direct access
        // to member data (v).
        // VOID here is the type returned by the operator.
    private: 
        double re, im;
        static int total;
};

int complex::total;

int main(){
    complex v;
    cout << "v.real() = " << v.real() << "  v.imag() = " << v.imag() << endl;
    cout << "real(v) = " << real(v) << "  imag(v) = " << imag(v) << endl;
    complex u(2.3, 3.4);
    v = u;
    cout << " real(v) = " << real(v) << "   imag(v) = " << imag(v) << endl;
}