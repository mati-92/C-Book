#include <iostream>
#include <cstdlib>
using namespace std;
// The overlaoded addition operator is defined as friend
// function, because if it was a member function, then
// it would not be symmetric with respect to operands,
// ex: (u + v) would be equivalent to u.operator+(v)
// so the expression : u + 10 will work but 10 + u would
// fail to compile.
// Other binary operators such as -, *, /, && etc must be
// defined as binary operators as well.
// The unary minus operator is defined as member operator
// with no arguments (except the hidden this pointer). Const
// specifies that te object tat the operator is invoked on it
// cannot be changed by it.
// In contrast to binary operators, both member and non-member
// functions are acceptable ways of overloading the unary minus operator.
class complex{
    friend double real(const complex & z);
    friend double imag(const complex & z);
    friend complex operator+(const complex &z, const complex &w);
    friend complex operator-(const complex &z, const complex &w);
    friend complex operator/(const complex &z, const complex &w);
    friend bool operator==(const complex &z, const complex &w);

    public:
        complex(double real = 0.0, double imag = 0.0){re = real; im = imag;}
        complex(const complex &z);
        complex & operator=(const complex &z);
        complex operator-() const;
    private: 
        double re, im;
};

inline double real(const complex &z){
    return z.re;
}
inline double imag(const complex &z){
    return z.im;
}
inline complex & complex::operator=(const complex &z){
    re = z.re;
    im = z.im;
    return *this;
}

inline complex operator+(const complex &z, const complex &w){
    return complex(z.re + w.re, z.im + w.im);
}

inline complex operator-(const complex &z, const complex &w){
    return complex(z.re - w.re, z.im - z.re);
}

inline complex operator/(const complex &z, const complex &w){
    return complex(z.re/w.re, z.im/w.im);
}

bool operator==(const complex &z, const complex &w){
    bool ans = false;
    if (z.re == w.re && z.im == w.im) ans = true;
    return ans;
}

inline complex complex::operator-() const{
    return complex(-re, -im);
}


int main(){
    complex u(1.1, 2.2), v(10.0, 20.0), w;
    w = u + v;
    cout << "Real part of w = " << real(w) << " Imaginary part of w = " << imag(w) << endl;
    w = u - v;
    cout << "Real part of w = " << real(w) << " Imaginary part of w = " << imag(w) << endl;
    w = u / v;
    cout << "Real part of w = " << real(w) << " Imaginary part of w = " << imag(w) << endl;
    // Sets the boolalpha format flag for the str stream.
    // When the boolalpha format flag is set, bool values
    // are inserted/extracted as their names: true and false
    // instead of integral values.
    bool ans = u == w;
    cout << " v == w ? " << boolalpha << ans << endl;
    u = w;
    ans = u == w;
    cout.setf(std::ios::boolalpha);
    cout << " v == w ? " << ans << endl;
    w = -v;
    cout << "real(-v) : " << real(w) << "   imag(-v) : "  << imag(w) << endl;

    return(EXIT_SUCCESS);
}