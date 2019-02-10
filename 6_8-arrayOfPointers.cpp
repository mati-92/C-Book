#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    double x, y, z;
    double *pt[3], **p, **p_end;
    pt[0] = &x;
    pt[1] = &y;
    pt[2] = &z;

    x = 1.1;
    y = 2.2;
    z = 3.3;

    p = pt;
    p_end = p + 3;
    while ( p < p_end){
        cout << "data = " << **p++ << endl;
    }
    return(EXIT_SUCCESS);
    // comment

}