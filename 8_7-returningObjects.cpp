#include <iostream>
#include <cstdlib>

using namespace std;
// Page 209

class sphere{
    public:
    void assign_coordinate_and_radius(double x, double y, double z,double r);
    sphere translated_sphere(double d_x, double d_y, double d_z);
    sphere & translated_sphere_ref(double d_x, double d_y, double d_z);
    void translate(double d_x, double d_y, double d_z);
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
inline void sphere::translate(double d_x, double d_y, double d_z){
    x_centre += d_x;
    y_centre += d_y;
    z_centre += d_z;
}
sphere sphere::translated_sphere(double d_x, double d_y, double d_z){
    sphere s_new;
    s_new.x_centre = x_centre + d_x;
    s_new.y_centre = y_centre + d_y;
    s_new.z_centre = z_centre + d_z;
    s_new.radius = radius;
    return s_new;
}


// The following action is WRONG
sphere & sphere::translated_sphere_ref(double d_x, double d_y, double d_z){
    sphere s_new;
    s_new.x_centre = x_centre + d_x;
    s_new.y_centre = y_centre + d_y;
    s_new.z_centre = z_centre + d_z;
    s_new.radius = radius;
    return s_new; // WRONG : cannnot return a reference to a local vairable
    // warning: reference to stack memory associated with local
    // variable 's_new' returned 
}


int main(){
    sphere s1, s2;
    s1.assign_coordinate_and_radius(1,1,1,2);
    s2 = s1.translated_sphere(1,1,1);
    cout << " The new sphere coordinate is x=" << s2.get_x_coord();
    cout << "  y=" << s2.get_y_coord() << "   z=" << s2.get_z_coord();
    cout << endl;
    s1.translate(1,1,1);
    cout << " The translated old sphere coordinate is x=" << s1.get_x_coord();
    cout << "  y=" << s1.get_y_coord() << "  z=" << s1.get_z_coord();
    cout << endl;
    return (EXIT_SUCCESS);
}