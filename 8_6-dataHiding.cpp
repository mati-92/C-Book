#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
// page 207

class cube{
    public:
    void assign_coordinate(double x, double y, double z);
    double get_x_coordinate(void);
    double get_y_coordinate(void);
    double get_z_coordinate(void);
    void assign_side(double s);
    double get_side_length(void);
    double volume(void);
    private:
    double x_center, y_center, z_center, side;
};

inline void cube::assign_coordinate(double x, double y, double z){
    x_center = x;
    y_center = y;
    z_center = z;
}

inline double cube::get_x_coordinate(void){
    return x_center;
}
inline double cube::get_y_coordinate(void){
    return y_center;
}
inline double cube::get_z_coordinate(void){
    return z_center;
}
inline void cube::assign_side(double s){
    side = s;
}
inline double cube::get_side_length(void){
    return side;
}
inline double cube::volume(void){
    return pow(side, 3.0);
}


int main(){
    cube c;
    c.assign_coordinate(1.0, 1.0, 1.0);
    c.assign_side(2.0);
    cout << "The volume of the cube is : " << c.volume() << endl;
    cout << " The center coordinates is : x=";
    cout <<c.get_x_coordinate() << "  y=" << c.get_y_coordinate() << "   z=" << c.get_z_coordinate() << endl;
    cout << "Side length is : " << c.get_side_length() << endl;

    return (EXIT_SUCCESS); 
}