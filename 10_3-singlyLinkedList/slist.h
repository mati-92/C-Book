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
    friend void print_list(const list &s);
    public: 
        list(void);
        list(const list &s);
        ~list();
        void push(DATA_TYPE new_data);
        void pop(DATA_TYPE &old_data);
        bool is_not_empty(void);
        private:
            node *head;
};

inline bool list::is_not_empty(void){
    if (head == 0)
        return false;
    else 
        return true;
}


#endif  // SLIST_H