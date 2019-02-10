#include <iostream>
#include <cstdlib>

using namespace std;

double f(int i){
    return 1./(i*i);
}
float p(void){
    return 3.14;
}

int main(){
    int * pt_i = new int;
    float *pt_f = new float(3.14);
    float *pt_arbitrary = new float();
    //double (*g)(int m); // a pointer to a function 
    double (**g)(int) = new(double (*)(int)); // a pointer to a pointer to a function which is allocated fynamically to g
    *g = f;
    float (**h)() = new(float (*)());
    *h = p;
    int *array = new int [5];
    for ( int i = 0; i < 5; ++i){
        array[i] = i;
    }
    //int *pt_i;
    //pt_i = new int;
    *pt_i = 100;
    //pt_i = 100 ; //  error: assigning to 'int *' from incompatible type 'int'
    cout << "*pt_i = " << *pt_i << endl;
    cout << "*pt_f = " << *pt_f << endl;
    cout << " Address of pt_f is : " << pt_f << endl;
    cout << " The new float() generates : " << *pt_arbitrary << endl;
    cout << " The pointer to the function points to : " << (**g)(2) << endl;
    cout << " A pointer to a pointer to a function : " << (**h)() << endl;
    cout <<  " Dynamically allocated array : " << array[0] << " "<< array[1]
        <<" "<< array[2] << " "<<array[3]<< " " << array[4] << endl;
    delete pt_i;
    delete pt_f;
    delete pt_arbitrary;
    delete[] array;

    return(EXIT_SUCCESS);
}
