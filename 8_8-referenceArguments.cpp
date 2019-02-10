#include <iostream>
#include <cstdlib>

using namespace std;
// Page 211


class sphere{
    public:
    void assign_coordinate_and_radius(double x, double y, double z,double r);
    void translated_sphere(sphere &s, double d_x, double d_y, double d_z);
    double get_x_coord(void);
    double get_y_coord(void);
    double get_z_coord(void);

    private:
    double x_centre, y_centre, z_centre, radius;
};

inline double sphere::get_x_coord(void){
    return x_centre;
}
inline double sphere::get_y_coord(void){
    return y_centre;
}
inline double sphere::get_z_coord(void){
    return z_centre;
}
inline void sphere::assign_coordinate_and_radius(double x, double y, double z, double r){
    x_centre = x;
    y_centre = y;
    z_centre = z;
}
void sphere::translated_sphere(sphere &s, double d_x, double d_y, double d_z){
        s.x_centre += d_x;
        s.y_centre += d_y;
        s.z_centre += d_z;
        s.radius = radius;
}
int main(){
    sphere s;
    s.assign_coordinate_and_radius(1.0, 1.0, 1.0, 2.0);
    s.translated_sphere(s,1,1,1);
    cout << " The new sphere coordinate is x=" << s.get_x_coord();
    cout << "  y=" << s.get_y_coord() << "   z=" << s.get_z_coord();
    cout << endl;
}