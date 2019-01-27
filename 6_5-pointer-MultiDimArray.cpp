#include <iostream>
#include <cstdlib>
// ====================================================
// Using pointers to access multi dimensional array
// See page 139
using namespace std;
int main(){
    int x[2][3];
    int count = 0;
    /*
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j){
            x[i][j] = count;
            count++;

        }
    }
    */
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j){
            //(*(x+i))[j] = count;
            //*(*(x+i) + j) = count;
            *(x[i] + j) = count;
            count++;
        }
    }


    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j){
            cout << x[i][j] << endl;
        }
    }
}

