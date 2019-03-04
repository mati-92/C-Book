#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;


float mysin(float x);
long long int factorial(int x);
int main(){
    float x;
    cout << "Please enter a number" << endl;
    cin >> x ;
    x = x * M_PI / 180.0;
    while( x > M_PI/2.0 || x < -(M_PI/2.0)){
        cout << "The argument should satisfy |x| < PI/2, please enter another number." << endl;
        cin >> x;
        x = x * M_PI / 180.0;
    }
    cout << "mysin(x) = " << setprecision(15) << mysin(x) << endl;
    cout << "sin(x) = " << setprecision(15) << sin(x) << endl;

    return(EXIT_SUCCESS);
}

long long int factorial(int x){
    long long int f = 1;
    if (x == 1 || x ==0)
        return f;
    else if ( x > 1)
        f = x * factorial(x-1);
    return f;
}

float mysin(float x){
    float s = 1.0;
    float ans = 0.0;
    long long int den = 1;
    for (int i = 0; i < 10; i++){
        ans += (pow(x,(i*2 + 1)) * s)/double(den);
        den *= (i + 2)*(i + 3);
        s *= -1.0;
    }
    return ans;
}