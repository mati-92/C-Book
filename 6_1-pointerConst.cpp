#include <iostream>

using namespace std;

int main(){
    const int w = 100;
    const int *pt_c;  // Pointer to a const type
    int *pt_i;
    pt_c = &w;
    cout << pt_c << endl;

    ++pt_c;
    cout << pt_c << endl;


    //ATTENTION: pt_i = &w; // INVALID
    double x = 123;
    double *const pt = &x; // A const pointer : it is initialized
    // to an address that cannot be changed, but the data stored 
    // in the memory can be changed. Actually it freezes the address
    // of the memory!
    ++*pt;  // x is not constant
    cout << *pt << endl;
    //ATTENTION: ++pt; // INVALID , pt is constant

}
