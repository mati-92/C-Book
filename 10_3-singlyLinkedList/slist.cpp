#include <iostream>
#include "slist.h"

using namespace std;
// remember: head has a data type member and an associated
// next pointer. 
// 
list::list(void){
    head = 0; // creating a list by putting head pointer to a NULL
}   // remember that head was an object of node class


/*
list::list(const list &s){
    //node  *ptr = new node;
    if (s.head == 0 ) head = 0;
    else
    {   
        node *currentnode = s.head;
        //head = s.head;
        while(s.head != 0){
            currentnode = head;
            currentnode->data = (s.head)->data;
            head = head->next;
        }
    }
    
}
*/

list::list(const list &s){
    
    node *ptr = s.head;
    if(ptr == 0)
        head = ptr;
    else{
        while(ptr != 0){
            node * p = new node;
            head = p;
            head->data = ptr->data;
            //cout << p->data << endl;
            head->next = ptr->next;
            //cout << p->next << endl;
            ptr = ptr->next;
        }
    }
    cout << " Copy constructor was invoked!\n";
}



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
    cout << "pop \n";
}

// to print the list members, the "next" pointer in node class
// must be a public member of the class so that a firend functio
// member of a firend class which is the "list" class can access 
// the ptr "next"
/*
void print_list(const list &s){
    node *ptr = s.head;
    while(ptr != 0){
        std::cout << ptr->data << "\n";
        ptr = ptr->next;
    }
}
*/