#include <iostream>
#include <climits>
using namespace std;

int main(){
    unsigned int i;
    /*
    i = UINT_MAX;
    cout << "UINT_MAX = " << i << endl;
    i = i + 1;
    cout << " UINT_MAX + 1 = " << i << endl;
    i = i - 1;
    cout << " 0 - 1 = " << i << endl;
    return(0);
    */
   
   int k = 0;
   for( i = 5; i >= 0 ; --i){
       cout << i << endl;
       k++;
       if (k == 7) break; // After 0 it goes to UINT_MAX!
   } // It is an infinit for! 
    cout << UINT_MAX << endl;

}