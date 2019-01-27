#include <iostream>

using namespace std;

int main(){
    double x = 110.0;
    bool b1 = x >= ( x / 13.0) * 13.0;
    bool b2 = x < (x / 13.0) * 13.0;
    cout << "b1: " << b1 << "\n"; //  ans: b1:1
    cout << "b2: " << b2 << "\n"; // ans: b2:2
    return(0);


}
