#include <iostream>

using namespace std;

class Demo{
    int *ptr;

    public:
        Demo(int a){ptr = new int(a);}
        ~Demo(){delete ptr;}
        void set(int a){*ptr = a;}
        int get() const {return *ptr;}

        Demo(const Demo &d){
            ptr = new int;
            *ptr = *(d.ptr);
        }
};

int main(){
    // without the user defined copy constructor
    //Demo dog(8);
    //Demo cat = dog; // defualt copy constructor of the compilor is invoked
    //cout << dog.get() << "  " << cat.get() << "\n"; 

    Demo dog(8);
    Demo cat = dog;
    cout << dog.get() << "  " << cat.get() << "\n"; 
    dog.set(99);
    cout << dog.get() << "  " << cat.get() << "\n"; 
}