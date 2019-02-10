#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << sizeof(a)/sizeof(int) << endl;
    //cout << sizeof(int) << endl; 
    cout << &a <<endl;  // “pointer to whole array of 10 int”
    cout << a << endl;  // “pointer to the first element of array”
    cout << &a[0] << endl;
    cout << &a + 1 << endl;
    cout << *(&a + 1) - a << endl;;

} 