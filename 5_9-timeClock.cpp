#include <iostream>
#include <ctime>

using namespace std;

int main(){
    //time_t calender_time;
    //clock_t cpu_time;
    //cout << " calender time : " << calender_time << " cpu itme : " << cpu_time << endl;
    //calender_time = time(NULL);
    //cpu_time = clock();
    time_t calender_s, calender_e;
    clock_t clock_s, clock_e;
    double sum;
    calender_s = time(NULL);
    clock_s = clock();
    for ( int i = 0; i < 100000 ; ++i){ 
        sum += 1./i;
    }
    calender_e = time(NULL);
    clock_e = clock();
    cout << "cpu time: " << static_cast<double>(clock_e - clock_s)/CLOCKS_PER_SEC << endl;
    cout << " calender time: " << static_cast<double>(calender_e - calender_s) << endl;
    cout << calender_e << "     " << calender_s << endl;

}
