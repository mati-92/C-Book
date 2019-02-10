#include <iostream>
#include <cstdlib>

using namespace std;

class sphere{
    public:
    double x_centre, y_centre, z_centre, radius;
};

int main(){
    sphere sph;
    sphere big_sph[10];
    sph.x_centre = 1.0;
    sph.y_centre = 1.0;
    sph.z_centre = 1.0;
    sph.radius = 1.0;

    cout << "X_centre = " << sph.x_centre << endl;
    cout << "radius = " << ++sph.radius << endl;
    sph.x_centre += 3;
    cout << "X_centre + 3 =" << sph.x_centre << endl;
    // array of objects
    big_sph[2].x_centre = 3.0;
    big_sph[2].y_centre = 3.0;
    // dynamically allocate objects
    sphere *a_sph;
    a_sph = new sphere;
    a_sph->radius = 2.3;

    sphere * array_sph;
    array_sph = new sphere[10];


    delete a_sph;
    delete[] array_sph;


    return(EXIT_SUCCESS);
}