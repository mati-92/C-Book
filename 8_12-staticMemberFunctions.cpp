#include <iostream>
#include <cstdlib>
// static member functions can only access the static data members
// and they need not to be invoked by a class object. (as in s1.class_func)
// however they can be!
using namespace std;

class sphere{
    public:
        static void increment_spheres(int new_sphere);
        static int total_spheres(void){ return total;}
    private:
        static int total; 
};

void sphere::increment_spheres(int new_sphere){
    total += new_sphere;
}
int sphere::total;

int main(){
    cout << "Initial number of sphere " << sphere::total_spheres() << endl;
    sphere s1, s2;
    sphere::increment_spheres(2); // static member function invoked by
    // class_name::func() to emphasize that the static member is a 
    // feature of the class rather than a particular instance of the class (object.)
    cout << "Total number of spheres = " << sphere::total_spheres() << endl;
    return (EXIT_SUCCESS);

}
