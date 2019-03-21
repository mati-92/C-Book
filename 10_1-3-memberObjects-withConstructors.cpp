#include <iostream>

using namespace  std;
// Member objects of a class can be objects of another class
// List of constructors in a member function definiton (not declaration)
// started with ":" and seperated with ",". It uses a compy constructor
// and not a initialization and an assignment! It is more efficient.

class complex{
    public:
        complex(){re = 0.0; im = 0.0; cout << "Initialized by constructor.\n"; }
        complex(const complex & z){re = z.re; im = z.im; cout << "Copy constructor is invoked\n";}
    private: 
        double re, im;
};

class data{
    public: 
        data(const complex &z1, const complex &z2);
    private: 
        complex u ,v;
};


data::data(const complex &z1, const complex &z2) : u(z1), v(z2){
    cout << "Constructor list arguments\n";
} // This directly calls copy constructor for u and v 
// The order in which the constructors are invoked is
// according to the order in ehich they are invoked 
// within the class.
/**** ans:
Initialized by constructor.
Initialized by constructor.
calling data constructor
Copy constructor is invoked
Copy constructor is invoked
Constructor list arguments
*******/

/*
data::data(const complex &z1, const complex &z2){
    cout << "inside the data constructor\n";
    u = z1;
    v = z2;
} // u and v are first initialized to zero and then assigned 
// the values of z1 and z2
*/
/***** ans:
 *Initialized by constructor.
Initialized by constructor.
calling data constructor
Initialized by constructor.
Initialized by constructor.
inside the data constructor
******/

int main(){
    complex z1, z2;
    cout << "calling data constructor\n";
    data(z1,z2);
}