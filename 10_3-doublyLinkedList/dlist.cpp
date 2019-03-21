#include "dlist.h"

dlist::dlist(void){
    head = 0;
    tail = 0;
    cursor = 0;
}

dlist::dlist(dlist &s){
    
}

dlist::~dlist(){
    while (head != 0){
        node *pt = head;
        head = head->next;
        delete pt;
    }
}

void dlist::add_head(void){
    node *pt = new node;
    if (head == 0){
        tail = pt;
    }else
    {
        head->last =  pt;
    }

    pt->next = head;
    pt->last = 0;
    head = pt;
    cursor = pt;
}

void dlist::delete_head(void){
    if (head == 0)
        return;
    node *pt = head;
    head = head->next;
    if (head != 0)
        head->last = 0;
    cursor = head;
    delete pt;
}