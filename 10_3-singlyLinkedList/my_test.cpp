#include <iostream>
#include <cstdlib>
#include "slist.h"

using namespace std;

int main(){
    list s;
    DATA_TYPE j;

    for (int i = 1; i <= 5; ++i)
        s.push(i);
    while (s.in_not_empty()){
        s.pop(j);
        cout << j << endl;
    }
    return (EXIT_SUCCESS);
}