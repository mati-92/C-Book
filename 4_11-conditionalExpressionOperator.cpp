#include <iostream>
using namespace std; 
int main(){
    float x, y;
    //bool ans = 1;
    char b;
    cout << "Enter x and y:";
    cin >> x >> y;
    //cout << ( (x * x + y * y <= 1) ? ans : !ans ) << endl;
    cout << ( (x * x + y * y <= 1) ? b = '\x54' : b = '\x46') << endl;
     // ans : T for true values anf F for false values
    // Here the conversion of Hexadecimal is used to show T and F
    return(0); 
}