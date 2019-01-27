#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    double *pt;
    double a[10];
    pt = &a[0];
    for (int i = 0; i < 10; ++i){
        //pt = &a[i];
        //*pt = i;
        *pt = i;
        ++pt;
    }
    
    for ( int i = 0; i < 10; ++i){
        cout << a[i] << " " ;
    }

}