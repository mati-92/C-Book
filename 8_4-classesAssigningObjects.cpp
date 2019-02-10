#include <iostream>
#include <cstdlib>

using namespace std;

class sphere{
    public:
    double x_center, y_center, z_center, radius;
};

int main(){
    sphere s1, s2;
    s1.x_center = 1.0;
    s1.y_center = 1.0;
    s1.z_center = 1.0;
    s1.radius = 1.0;

    s2 = s1;

    cout << "s2.x_center = " << s2.x_center << endl;
    cout << "s2.y_center = " << s2.y_center << endl;
    cout << "s2.z_center = " << s2.z_center << endl;
    cout << "s2.radius = " << s2.radius << endl;

}