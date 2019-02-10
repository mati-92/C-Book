#include <iostream>
#include <cstdlib>

using namespace std;

double f2(int i);
double f4(int i);
double sum(double (*g)(int m), int n);


double f2(int i){
    return 1.0/(i * i);
}

double f4(int i){
     double temp = i * i;
     return 1.0/(temp * temp);
}

double sum(double (*g)(int m), int n){
    double temp = 0.0;
    for (int i = 1; i < n ; ++i)
        temp += (*g)(i);
    return temp;
}

int main(){
    cout << " Reimann Zeta functions aprox. " << endl;
    cout << " Zeta(2) = " << sum(f2, 20) << endl;
    cout << " Zeta(4) = " << sum(f4, 20) << endl;
    return (EXIT_SUCCESS);
}