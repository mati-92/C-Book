#include <iostream>
#include <cstdlib>

using namespace std;

void swap_array(int *pt_x, int *pt_y){
    int temp;
    temp = *pt_x;
    *pt_x = *pt_y;
    *pt_y = temp;
   // int M = *(&a + 1) - a;
}

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 5; ++i){
        //cout << i << " " << 9-i << endl;
        swap_array(&a[i], &a[9-i]);
    }
    //cout << a[1] << " " << a[9] << endl;
    for ( int j = 0; j < 10; ++j){
        cout << a[j] << endl;
    }

}