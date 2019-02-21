#include <iostream>
#include <cstdlib>

using namespace std;
// Initializers cannot be included in a class declaration.
// constructors are special types of functions,
// that are designed for initializing objects.
// the constructor name is same as the class and without return type
// the constructor can be overloaded as long as 
// the function arguments are different
class complex{
    public: 
        complex(double x = 0.0, double y = 0.0){ re = x; im = y; }
        complex(const complex &z){ re = z.re; im = z.im;} // function overloaded
        // A copy-constructor with a reference to the class type
        void print(void);
    private: 
        double re, im;
    private:
};

inline void complex::print(void){
    cout << "(" << re << "," << im << ")" << endl;
}

int main(){
    complex u;
    u.print();
    // two ways to use constructor to initialize
    complex v(2.0, 3.0);
    v.print();
    complex w = complex(3.0, 4.0);
    w.print();

    complex z(v);
    z.print();
    return(EXIT_SUCCESS);
}