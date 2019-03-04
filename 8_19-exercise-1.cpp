#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class cylinder{
    public: 
        cylinder(double r = 0, double h = 0){radius = r; height = h; total +=1;}
        cylinder(const cylinder &c) {radius = c.radius; height = c.height; total += 1;}
        static int total_cylinders(void) {return total;}
        double get_radius(void) { return radius;}
        double get_height(void) { return height;}
        double volume(void) { return M_PI * radius * radius * height;}
    private: 
        double x, y, z, radius, height;
        static int total;
};

int cylinder::total = 0;

int main(){
    cylinder cyl1(1, 5);
    cylinder cyl2(cyl1);
    cout << "total numbers of cylinders : " << cylinder::total_cylinders() << endl;
    cout << "cyl2 radius : " << cyl2.get_radius() << endl;
    cout << "cyl2 height : " << cyl2.get_height() << endl;
    cout << "cyl2 volume : " << cyl2.volume() << endl;

    return(EXIT_SUCCESS);
}