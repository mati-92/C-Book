#include <iostream> 
using namespace std;
 int main()
{
    int i, j, m, n, a, b;
    cout << "enter an integer: ";
    cin >> i;
    cout << "enter an integer: ";
    cin >> j;
    m = i / j;
    n = i % j;
    a = m*j; //(i/j)*j
    b = a+n; //(i/j)*j+i 
    cout << "i " << i << "j " << j << "\n\n" <<
    "i / j " << m << " i %j = " << n <<  "\n\nThe following result should be " << i << ":\n" << "(i / j) *j + i %j = " <<  b <<
     "\n";
    return(0);
}