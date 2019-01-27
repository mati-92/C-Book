#include <iostream>
#include <climits>
using namespace std;
int main(){
    char a, b;
    //a = '\61';
    //b = '\x31';
    //cout << a << ' ' << '\0' << b <<'\n';
    //long i;
    //i = INT_MAX + 10;  //Integer overflow
    //cout << i << '\n';
    /*cout << SHRT_MAX << "\n";
    cout << INT_MAX << '\n';  
    cout << INT_MIN << "\n";
    cout << LONG_MAX << "\n";
    cout << LONG_MIN << "\n"; */
    unsigned int i;
    i = UINT_MAX;
    cout << i << '\n';
    i = i + 1;
    cout << i << '\n';
    i = i - 1;
    cout << i << '\n';
    
    return(0);
}