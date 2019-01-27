#include <iostream>
#include <cmath>
using  namespace std;

// FIBONACCI SEQUENCE 
// Checking u_1 + u_2 + ... + u_n = u_(n+2) - 1

int main(){
    int N;
    cout << "Enter a positive integer for max N in Fibonacci sequence" << endl;
    cin >> N;
    if ( N < 0){
        cout << "Invalid input" << endl;
    }else{
        cout << "Checking : u_1 + u_2 + ... + u_n = u_(n+2) - 1" << endl;
        int u_n1 = 1, u_n2 = 1, u_n3 = 0, u_n4, n = 3, sum_un = 0;
        cout << " n = 1, u =  " << u_n1 << endl;
        cout << " n = 2, u =  " << u_n2 << endl;
        sum_un = u_n1;
        while( n <= N){
            u_n3 = u_n1 + u_n2;
            int a = u_n3 - 1;
            if( a == sum_un) cout << "True" << endl;
            sum_un += u_n2;
            cout << " n = " << n << " ,u = " << u_n3 << endl;
            u_n1 = u_n2;
            u_n2 = u_n3;
            n++;
        }
    }
}
