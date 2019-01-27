#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    double x, y;
    double *pt_x, *pt_y;
    double **pt_pt_x, **pt_pt_y;
    pt_x = &x;
    pt_pt_x = &pt_x;
    pt_y = &y;
    pt_pt_y = &pt_y;
    x = 1.;
    y = 2.;
    cout << " x = " << **pt_pt_x << endl;
    cout << " &pt = " << pt_pt_x << " or " << &pt_x << endl;
    cout << " *pt_pt =  " << *pt_pt_x << endl;
    cout << " pt = " << pt_x << endl;
    
    cout << **pt_pt_x * **pt_pt_y << endl;

    return(EXIT_SUCCESS);
}