#include <iostream>

// Operator overlaoding is implemented by an operator function call.
// overloaded operators can be implemented by non-static member functions
// or by non-member functions (friend functions)
// " = , () , [] , -> " these operators can only be overloaded by
// non-static member functions

// - Binary Operators A @ B : A.operator@(B) for non-static member function,
// operator@(A, B) for non-member function
// The member function has one explicit argument and the hidden this pointer
// NOTE : binary operators such as + should be defined as friend, because the
// user-defined conversion is not applied to the dereference hidden this pointer

/*
Overloading operators as friend functions is better in order to allow
conversions to apply to both the left and right side of the expression.
For example, string's operator+ is a friend so that I can write 
"Hello " + string("World") rather than only being able to write 
string("Hello ") + "World".
However, this reasoning doesn't apply to mutators such as operator+=. 
You have to take a non-const left argument, which precludes being able
 to use this operator on a temporary. For this reason, it's recommended 
 to implement non-mutating operators as friend (or otherwise free-) 
 functions and mutators as member functions. (In fact, operator= can only
  be overloaded as a member function.)
  */

/*
If a binary operator for a fundamental type requires an lvalue for the
left operand, then the overloaded operator should be declared as a member function.
For example, we don't want the += operator in 1.4 +=z to be accepted by compiler!
*/


// - Prefix Unary Operators @ A : A.operator@() for non-static member function
// operator@(A) for non-member functions, Ex: ++z = z.operator++() = operator++(Z)

// - Postfix Unary Operators A@: A.operator@(0) for non-static member function
// operator@(A,0) for non-member function

class complex{
    //friend complex operator++(complex &z, int);
    //friend complex operator++(complex &z);
    friend complex operator+(const complex &u, const complex &v);
    friend complex operator+=(complex &u, const complex &v);
    friend double real(const complex &z);
    friend double imag(const complex &z);
    public: 
        //complex &operator+=(const complex &z);
        complex operator++();
        complex operator++(int);
        complex(double x = 0.0, double y = 0.0){re = x; im = y;}
        complex & operator=(const complex &z){ re = z.re; im = z.im; return *this;}

    private: 
        double im , re;
};

double real(const complex &z){
    return z.re;
}
double imag(const complex &z){
    return z.im;
}

complex operator+(const complex &u, const complex &v){
    return complex(u.re + v.re, u.im + v.im);
}

///// binary += operator as non-member function
complex operator+=(complex &u, const complex &v){
    u = u + v;
    return u;
}

/*
///// binary += operator as non-static member function
complex &complex::operator+=(const complex &z){
    re += z.re;
    im += z.im;
    return *this;
}*/

/*
/////unary prefix ++ operator as non-member function
complex operator++(complex &z){
    return complex(z.re++, z.im++);
}
*/

/////unary prefix ++ operator as non-static member function
complex complex::operator++(){
    return complex(re++, im++);
}

/*
/////unary postfix ++ operator as non-member function
complex operator++(complex &z, int){
    return complex(z.re++, z.im++);
}
*/

complex complex::operator++(int){
    return complex(re++, im++);
}

int main(){
    complex u(1,2);
    complex v = 3;
    complex w = v + u; // implicit conversion
    std::cout << " real(w) " << real(w) << "     imag(w) " << imag(w) << std::endl;
    w.operator=(operator+(u, v)); // an operator function call
    std::cout << " real(w) " << real(w) << "     imag(w) " << imag(w) << std::endl;
    v+=u;
    std::cout << " real(v) " << real(v) << "     imag(v) " << imag(v) << std::endl;
    ++v; // or operator++(z);
    std::cout << " real(v) " << real(v) << "     imag(v) " << imag(v) << std::endl;
    v++; // or operator++(z,0);
    std::cout << " real(v) " << real(v) << "     imag(v) " << imag(v) << std::endl;
}