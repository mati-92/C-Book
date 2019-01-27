#include <iostream>
#include <cstdlib>
#include <cstddef>

using namespace std;

int main(){
    double *pt_1, *pt_2;
    double a[10], b[20];
    ptrdiff_t diff;
    pt_1 = &a[0];
    pt_2 = &a[11];

    diff = pt_1 - pt_2;
    cout << " Diff : " << diff ;

    // pt_2 = &b[20]; // Should be UNDEFINED!!!
    // diff = pt_1 - pt_2;

}