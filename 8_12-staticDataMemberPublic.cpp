#include <iostream>
#include <cstdlib>
// Public data members can be accessed directly by class_name:: and
// there is no need for objects to exist.
using namespace std;

class sphere{
    public:
        static int total; // type declaration
};

int sphere::total; // Memory allocation.

int main(){
    sphere::total = 10;
    cout << sphere::total << "\n";
    sphere::total = 20;
    cout << sphere::total << "\n";
    int *pt = & sphere::total; // pointer to data member without .* operator
    // since there is only one copy of a static data member
    cout << *pt << "\n";
    
    return(EXIT_SUCCESS);
}