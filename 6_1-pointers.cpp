#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int i, j, k;
    int *i_pt, *j_pt;
    i_pt = &i;
    j_pt = &j;
    i = 1;
    j = 2;
    k = *i_pt + *j_pt;
    *i_pt = 10;
    cout << " k = " << k << "  i = " << i << "  i_pt = " << *i_pt << endl;
    return(EXIT_SUCCESS);
}
