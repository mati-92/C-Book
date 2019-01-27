#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    int i, j, k;
    int *pt_i = 0, *pt_j = 0;
     // Forget to assign &i to pt_i here!
     pt_j = &j;
     i = 1;
     j = 2;
     k = *pt_i + *pt_j;
     cout << " k should be 3, it is :" << k << endl;
     return(EXIT_SUCCESS);
}