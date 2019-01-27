#include <iostream>

using namespace std;

int main(){
    int a[5];
    for ( int i = 0; i <=5; ++i){
        a[i] = i;
    }
    cout << a[0] << a[1] << a[4] << a[5] << endl;
    // What you really want is an array of size 5, but here 
    // as you assign the a[5] = 5 , then an extra element is
    // added to the array, so the size is 6 instead
}