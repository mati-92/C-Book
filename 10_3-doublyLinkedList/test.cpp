#include <iostream>
#include <cstdlib>
#include "dlist.h"

using namespace std;

void print_forward(dlist &s){
    node * pt;
    s.set_cursor_head();
    cout << "Forward list: ";
    if ((pt = s.forward()) != 0)
        cout << pt->data;
    else
        cout << "empty";
    while( (pt = s.forward()) != 0)
        cout << " -> " << pt->data;
    cout << "\n";
}

void print_backward(dlist &s){
    node *pt;
    s.set_cursor_tail();
    cout << "Backward list: ";
    if (( pt = s.backward()) != 0)
        cout << pt->data;
    else 
        cout << "empty";
    while((pt = s.backward()) != 0){
        cout << " -> " << pt->data;
    }
    cout << "\n";
}

int main(){
    // Create an empty list
    dlist s;

    // Print the list forwards and backwards:
    print_forward(s);
    print_backward(s);

    // Put some items in the list:
    for (int i = 1; i <= 5; ++i){
        s.add_head();
        (s.cursor_position())->data = 10 * i;
    }

    // Print the list forwards and backwards
    print_forward(s);
    print_backward(s);

    // Delete an item:
    s.delete_head();

    // Print the new first item:
    cout << "Head of list is now " << (s.cursor_position())->data << "\n";

    // Print the list forwards and backwards:
    print_forward(s);
    print_backward(s);

    return(EXIT_SUCCESS);
}