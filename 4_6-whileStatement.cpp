#include <iostream>
using namespace std;

int main(){
    int i = 1;
    double out;
    while( i<= 20){
        //cout << i << "\n";
        if (i%2 == 0){
            //cout << " 'i' is :" << i << "\n";
            out += (-1.0/i);
            cout << (-1.0/i) << "\n";
        }else{
            cout << " 'i' is :" << i << "\n";
            out += (1.0/i);
        }
        ++i;
    }
    cout << "The sum is :" << out << "\n";  // The result is "The sum is :0.668771"
    return(0);
}