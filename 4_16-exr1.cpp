#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N = 50;
    double sum = 0;
    double pi = 0;
    for (int i = 1; i < N; ++i){
        double k = static_cast<double> (i);
        sum += 1./pow(k,4);
    }
    pi = sqrt(sqrt((sum * 90.)));
    cout <<"Pi is aproximately : " << pi << endl;
    cout << "The accuract is : " << fabs(pi - M_PI)/M_PI * 100. << endl;
}