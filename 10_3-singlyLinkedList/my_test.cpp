#include <iostream>
#include <cstdlib>
#include "slist.h"

using namespace std;


int main(){
    list s;
    DATA_TYPE j;

    for (int i = 1; i <= 5; ++i)
        s.push(i);
    
    //print_list(s);
    /*
    while (s.in_not_empty()){
        s.pop(j);
        cout << j << endl;
    }*/

    
    list new_s(s);
    //new_s = s;
    //print_list(new_s);

    /*
    while (s.is_not_empty()){
        s.pop(j);
        cout << j << endl;
    }*/

    while (new_s.is_not_empty()){
        new_s.pop(j);
        cout << j << endl;
    }

    return (EXIT_SUCCESS);
}