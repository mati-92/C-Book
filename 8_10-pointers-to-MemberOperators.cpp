#include <iostream>
#include <cstdlib>

using namespace std;
// Page 213

// DESCRIPTION:
// 1- Two ways of specifying class object: 
// a)Its name. 
// b)Its pointer.
// 2- Two ways of specifying class members:
// a)Members name.
// b)Pointers to class members ('::*' operator).

class sphere{
    public:
    void assign_radius(double r) { radius = r;}
    double radius;
};

int main(){
    sphere s;
    sphere * pt_s; // a pointer to an object
    pt_s = &s; // address of object assigned to pt_s

    // Two ways to refer to members of a class
    // 1- To use the member directly
    // 2- Dereference a pointer to class member

    double sphere::*pt; // pointer to a data member of type double belonging to sphere class
    pt = &sphere::radius; // pt points to the 'radius' data member
    // the '::*' operator is called 'pointer to member declarator'

    void (sphere::*pt_f)(double); // a pointer to the member function
    // of the class sphere of type void, the class has an argument
    // of type double
    pt_f = & sphere::assign_radius;
    //pt_f = sphere::assign_radius; // these two are equivalrnt since
    // function name is the address of it.
    
    // Four methods to access members of the object 's';
    // 1- Class member access operator '.'.
    s.radius = 1.0; // Access data member of the object
    s.assign_radius(1.0); // Access member function of the object

    // 2- Second class member access operator '->'.
    pt_s->radius = 1.0;
    pt_s->assign_radius(1.0);

    // 3- Pointer-to-member operator '.*'.
    s.*pt = 1.0; // Access data member 
    (s.*pt_f)(1.0);  // Access member function
    // '.*' is used to access members of a reference to an object
    sphere &ss = s; // reference to an object - ss is an alias for s
    ss.*pt = 1.0; // Access data member
    (ss.*pt_f)(1.0); // Access member function

    // 4- Second pointer to member operator '->*'
    // When both operands are pointers
    // one a pointer to an object and the other a pointer ro a class member
    pt_s->*pt = 1.0; // Access a data member
    (pt_s->*pt_f)(1.0); // Access member function

    
    return (EXIT_SUCCESS);
}