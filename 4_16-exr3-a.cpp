#include <iostream>
#include <cmath>
using  namespace std;

// FIBONACCI SEQUENCE 

int main(){
    int N;
    cout << "Enter a positive integer for max N in Fibonacci sequence" << endl;
    cin >> N;
    if ( N < 0){
        cout << "Invalid input" << endl;
    }else{
        int u_n1 = 1, u_n2 = 1, u_n3 = 0, u_n4, n = 3, sum_un = 0;
        cout << " n = 1, u =  " << u_n1 << endl;
        cout << " n = 2, u =  " << u_n2 << endl;
        sum_un = u_n1 + u_n2;
        while( n <= N){
            u_n3 = u_n1 + u_n2;
            cout << " n = " << n << " ,u = " << u_n3 << endl;
            //cout << (u_n2 * u_n2) - ( u_n1 * u_n3) << endl;
            //cout << pow(-1,(n-2)) << endl;
            int a = (u_n2 * u_n2) - ( u_n1 * u_n3);
            int b = pow(-1,(n-2));
            if ( a == b) cout << "u_n^2 - u_n-1 * u_n+1 = (-1)^(n-1), with value :" << a << endl;
            u_n1 = u_n2;
            u_n2 = u_n3;
            n++;
        }
    }
}
