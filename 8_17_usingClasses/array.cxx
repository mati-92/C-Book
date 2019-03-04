// Implements array class.
#include "array.h"

int gen_array::total = 0; //static data member need to be allocated.

gen_array::gen_array(int size){
    elements = size;
    pt = new double[elements];
    ++total;
}

int gen_array::number_of_arrays(void){
    return total;
}

gen_array::gen_array(const gen_array & arr){
    elements = arr.elements;
    pt = new double[elements];
    total++;
    ///////pt[0] = arr.element(0); ???
    }