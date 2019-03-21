#ifndef DLIST_H
#define DLIST_H

#include <cstdlib>

using namespace std;

typedef int DATA_TYPE;

class node{
    friend class dlist;
    public: 
        DATA_TYPE data;
    private: 
        node *next, *last;
};

class dlist{
    public: 
        dlist(void);
        dlist(dlist &s);
        ~dlist();
        void add_head();
        void delete_head(void);
        node *forward(void);
        node *backward(void);
        void set_cursor_head(void);
        void set_cursor_tail(void);
        node *cursor_position(void);
    private: 
        node *head, *tail, *cursor;
};

inline node * dlist::forward(void){
    node *pt = cursor;
    if (cursor != 0)
        cursor = cursor->next;
    return pt;
}

inline node * dlist::backward(void){
    node *pt = cursor;
    if (cursor != 0)
        cursor = cursor->last;
    return pt;
}

inline void dlist::set_cursor_head(void){
    cursor = head;
}

inline void dlist::set_cursor_tail(void){
    cursor = tail;
}

inline node * dlist::cursor_position(void){
    return cursor;
}

#endif // DLIST_H