#include <iostream>
using namespace std;

int main(){
    int i, j , k;
    for ( i = 1; i <= 5; ++i){
        cout << "i ; " << i << endl;
        for ( j = 1; j <= 5 ; ++j){
            cout << "j ; " << j << endl;
            for ( k = 1; k <= 5 ; ++k){
                cout << "k ; " << k << endl;
                if ( i == 2 && j == 3 && k == 4 )
                    goto leap;
                
            }
        }
    }
    leap: cout << " Left the loop with i=" << i << "  j=" << j << "  k=" << k << "\n";
    return(0); // ans:  Left the loop with i=2  j=3  k=4
}