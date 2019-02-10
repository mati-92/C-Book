#include <iostream>
#include <cstdlib>

using namespace std;

/*
double sum(double pt[],int n){ // we could simply use a pointer in the function declaration as *pt instead of pt[]
    double temp = 0.0;
    for (int i = 0; i < n; ++i){
        temp += pt[i];
    }
    return temp;
}
*/

/*
// sum with pointer arithmetic
double sum(double pt[], int n){ // or sum(double *pt, int n)
    double temp = 0.0, * pt_end;
    pt_end = pt + n;
    while(pt < pt_end){
        temp += *pt++;
    }
    return temp;
}
*/

// confusion in array notation in function arguments
double sum(double pt[10], int m){
    double temp = 0.0;
    int n = sizeof(pt) / sizeof(double);  // warning: sizeof on array function parameter will
      //return size of 'double *' instead of 'double []'
    for ( int i = 0; i < n ; ++i){
        temp += pt[i];
    }
    return temp; // here the result is "1", since n is 1 !
}

int main(){
    double height[10] = {1,1,1,1,1,1,1,1,1,1};
    double height_tot;
    height_tot = sum(height, 10);
    cout << " sum(height, 10) : " << height_tot <<endl;
    height_tot = sum(&height[3], 10);
    cout << " sum(&height[3], 10) : " << height_tot << endl;
    

}