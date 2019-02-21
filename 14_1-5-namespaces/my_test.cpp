#include <iostream>
#include <cstdlib>
#include "weather_station.h"
#include "met_office.h"
#include "humidity.h"

using namespace std;
namespace W = weather_station; // an 'alias' for a namespace
int main(){
    met_office::temprature();
    W::pressure();

    {
        using namespace met_office;
        humidity();
    
    } //A scope for showing how 'using' directive works

    return(EXIT_SUCCESS);
}