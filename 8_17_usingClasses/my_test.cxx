#include <iostream>
#include <cstdlib>
#include "array.h"

using namespace std;
int main(){
    int array_size = 5;

    // Define an object:
    gen_array x(array_size);

    // ACCESS the array size
    cout << "The array  x size is " << x.get_size() << endl;

    // Store some data
    for (int i = 1; i <= array_size; ++i){
        x.element(i) = i;
    }

    //Retrieve some data
    for (int i = 1; i <= array_size; ++i){
        cout <<  "x : " << x.element(i) << "   ";
    } cout << '\n';

    // Define another object:
    gen_array y(array_size);

    // Now repeat the above, using a pointer to an object:
    gen_array *p = &y;

    // Access the array size:
    cout << "The array size is " << p->get_size() << endl;

    // Store some data
    for (int i = 1; i <= array_size; ++i)
        p->element(i) = i * 2;
    
    // Retrieve some data
    for(int i = 1; i <= array_size; ++i)
        cout << p->element(i) << "   ";
    cout << "\n";
    /*
    // Try to go outside of the bounds:
    p->element(array_size + 1) = 3.14;
     // Access the array size:
    cout << "The array size is " << p->get_size() << endl;
    */
    // Using the copy constructor to define a new array object
    gen_array z(y); 
    // Use static member function to get number of objects:
    cout << "Number of arrays initialized is " << gen_array::number_of_arrays() << endl;
    

    return(EXIT_SUCCESS);
}