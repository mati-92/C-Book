#include "slist.h"

// remember: head has a data type member and an associated
// next pointer. 
// 
list::list(void){
    head = 0; // creating a list by putting head pointer to a NULL
}   // remember that head was an object of node class

list::~list(){
    while(head !=0 ){
        node* pt = head;
        head = head->next;
        delete pt;
    }
}

void list::push(DATA_TYPE new_data){
    node * ptr = new node;
    ptr->data = new_data;
    ptr->next = head;
    head = ptr;
}

void list::pop(DATA_TYPE & old_data){
    if (head != 0 ){
        old_data = head->data;
        node * ptr = head; // now ptr and head are pointing to
        // a same place in memory, deleting one  will delete that
        // memory that ptr/head is pointing to.
        head = head->next; // next has the address of the next node
        // which will be passed to head pointer
        delete ptr; // when you delete head 
    }
}