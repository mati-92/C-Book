#include <iostream>

using namespace std;

class complex{
    friend double real(const complex &z);
    friend double imag(const complex &z);
    friend complex operator+(const complex &u, const complex &v);
    public: 
        complex(double x = 0.0, double y = 0.0){re = x; im = y;}
        //complex(double x){re = x; im = 0.0;} // this is WORNG when the constructor is used to initialize objects.
        // call to constructor of 'complex' is ambiguous
        // Because DEFAULT arguments are supplied right to left,
        // this implies that we have already implemented a constructor
        // taking a single argument of type double.
        complex &operator=(const complex &z); // it is used in the implicit conversion in below
    private: 
        double re, im;
};

inline double real(const complex &z){
    return z.re;
}
inline double imag(const complex &z){
    return z.im;
}

inline complex &complex::operator=(const complex &z){
    re = z.re;
    im = z.im;
    return *this;
}

inline complex operator+(const complex &u, const complex &v){
    return complex(u.re + v.re, u.im + v.im);
}

int main(){
    complex v(2.0); // explicit conversion by constructor
    complex w;
    cout << "real(v) : " << real(v) << "    imag(v) : " << imag(v) << endl;
    w = 1; // conversion by constructor from int to complex
    // implicit conversion by constructor
    cout << "real(w) : " << real(w) << "    imag(w) : " << imag(w) << endl;
    complex z = v + w;
    cout << "real(z) : " << real(z) << "    imag(z) : " << imag(z) << endl;
}