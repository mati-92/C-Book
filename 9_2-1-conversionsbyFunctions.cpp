#include <iostream>

using namespace std;
// A constructor cannot convert to a fundamental type, or another class type.
// A conversion function is a class member function and 
// is actually an operator function call.
// It has the format "operator type()". 
// EX: operator int(); // No argumnet, no return type
// There is no argument and return type for it, 
// since the return type is same as the function name.
// No argument for conversion functions and no overloading.
// A conversion function is a user define cast operator.

// 1- conversion from a class to a fundamental type
// example: a conversion function that converts time object into int
class time{
    public: 
        time(int h, int m, int s){hours = h; minutes = m; seconds = s;}
        operator int(){return(seconds + 60 *(minutes + 60*hours));}
    private: 
        int hours, minutes, seconds;
};

// 2- conversion between classes
// example : array class for objects with three elements
class array3{
    public: 
        array3(double x = 0.0, double y = 0.0, double z = 0.0){data[0] = x; data[1] = y; data[2] = z;}
        //array3(){data[0]= data[1] = data[2] = 0.0;}
        array3& operator=(const array3 &a);
        void list_data(void);
    private: 
        double data[3];
};

inline array3 & array3::operator=(const array3 &a){
    data[0] = a.data[0];
    data[1] = a.data[1];
    data[2] = a.data[2];
    return *this;
}

void array3::list_data(void){
    cout << "(" << data[0] << "," << data[1] << "," << data[2] << ")" << endl;
}
// class for objects with two elements
class array2{
    public: 
        array2(){data[0] = data[1] = 0.0;}
        array2(double x = 0.0, double y = 0.0){data[0] = x; data[1] = y;}
        array2 & operator=(const array2 &a);
        operator array3();
        void list_data(void);
    private: 
        double data[2];
};

inline array2 & array2::operator=(const array2 &a){
    data[0] = a.data[0];
    data[1] = a.data[1];
    return * this;
}

array2::operator array3(){
    return array3(data[0], data[1], 1.0);
}

void array2::list_data(void){
    cout << "(" << data[0] << "," << data[1] << ")" << endl;
}

int main(){
    class time t(16, 21, 35); // 16 hours 21 minutes 35 seconds
    int s;
    s = int(t); // Time in seconds
    cout << "Time in seconds is " << s << "\n";

    array3 a3(1,2,3); // explicit conversion 
    a3.list_data();  // ans : (1,2,3)
    a3 = 4;  // implicit conversion
    a3.list_data(); //  ans : (4,0,0)
    array2 a2(2,2); 
    a2.list_data(); // ans : (2,2)
    array3 b3;
    b3 = array3(a2); // user defined cast of array2
    b3.list_data(); // (2,2,1)
}