#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int & x, int & y){ // the token "&" is reference declarator
    int temp; // & is not an operator here but rahter is used
    temp = x; // in the declaration of a type
    x = y;
    y = temp;
}

int main(){
    int x = 2, y = 3;
    swap(x, y);
    cout << "x=" << x << "  y=" << y << endl;

    return(EXIT_SUCCESS);
}