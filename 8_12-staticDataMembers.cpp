#include <iostream>
#include <cstdlib>
// static data member is common to all objects of a class, unlike
// a radius which is a specific property of each object s.
// The same static data member is seen by all objects.
using namespace std;

class sphere{
    public:
        void increment_sphere(int new_sphere);
        int total_sphere(void) {return total; }
    private:
        static int total; // Initialization is illegal here, beacuse it is 
        // a declaration that only defines a type
};

void sphere::increment_sphere(int new_sphere){
    total += new_sphere;
}

int sphere::total; // to allocate memory to the static int data type named total
// total is static and initialized to zero by default, however one can initialize
// it if it's neccessary - NOTE: It is not assignment. 


int main(){
    //int sphere::total; // error: definition or redeclaration of 'total' not allowed inside a function
    sphere s1, s2;
    s1.increment_sphere(2);
    cout << " Total number of sphere known to s1 = " << s1.total_sphere() << endl;
    cout << " Total number of spheres known to s2 = " << s2.total_sphere() << endl;
    return(EXIT_SUCCESS);

}