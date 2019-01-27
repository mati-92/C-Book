#include <iostream>
#include <cstdlib>

using namespace std;
// A related and quite common error is to forget to allocate
// any memory for the pointer to point to.
int main(){
    int i, j, k;
    int *i_pt, *j_pt;
    // Forget to assign &i to pt_i here! //i_pt = &i;
    j_pt = &j;
    i = 1;
    j = 2;
    k = *i_pt + *j_pt;
    *i_pt = 10;
    cout << " k = " << k << "  i = " << i << "  i_pt = " << *i_pt << endl;
    return(EXIT_SUCCESS);
}