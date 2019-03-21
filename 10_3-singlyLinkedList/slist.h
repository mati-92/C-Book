#ifndef SLIST_H
#define SLIST_H

typedef int DATA_TYPE;

class node{
    friend class list; // the entire list class is a friend of node
    public: 
        DATA_TYPE data; // for the data part of the node
    private: 
        node *next; // a pointer of a node abject can be used bu not a node object itself!
};

class list{
    public: 
        list(void);
        ~list();
        void push(DATA_TYPE new_data);
        void pop(DATA_TYPE &old_data);
        bool in_not_empty(void);
        private:
            node *head;
};

inline bool list::in_not_empty(void){
    if (head == 0)
        return false;
    else 
        return true;
}


#endif  // SLIST_H