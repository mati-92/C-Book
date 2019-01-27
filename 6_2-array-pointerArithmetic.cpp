#include <iostream>

using namespace std;

int main(){
    double sum = 0.0, a[10];
    double *pt, *pt_end;
    pt = &a[0];
    for (int i = 0; i < 10; ++i){
        *pt = 1;
        pt++;
    }
    pt = a; // equivalent to : &a[0]
    pt_end = pt + 10;
    while( pt < pt_end){
        sum += *pt++;

    }
    cout << sum << endl;
}