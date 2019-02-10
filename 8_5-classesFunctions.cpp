#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class sphere{
    public:
    double x_centre, y_centre, z_centre, radius; 
    double volume(void) {return (4./3.) * M_PI * pow(radius, 3.);}
};

class cube{
    public:
    double x_center, y_center, z_center, side;
    double volume(void);
};

inline double cube::volume(void){
    return pow(side, 3);
} // when the member function is inline it should be defined before it is invoked.


double Volume(sphere s){
    return (4./3.) * M_PI * pow(s.radius, 3.);
}

int main(){
    sphere s;
    s.radius = 1.0;
    cout << " The sphere volume is : "<< Volume(s) << endl;
    cout << " The sphere volume is : "<< s.volume() << endl;
    cube c;
    c.side = 2.0;
    cout << " The cube volume is : " << c.volume() << endl;
    return(EXIT_SUCCESS);
}
