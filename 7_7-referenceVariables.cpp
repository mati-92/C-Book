#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int x;
    int & y =x; // reference variable must be initialized
    x = 10; // y is an alias for x
    cout << " y=" << y << endl;
    y = 200;
    cout << "   x=" << x << endl;
    int z;
    //&y = z; //  cannot subsequently ba chaged! expression is not assignabl
    return (EXIT_SUCCESS);
}
