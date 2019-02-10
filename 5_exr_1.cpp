#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
long long int factorial_recursive(int n){
    long  long int fact = 1;
    if (n==0 || n==1)
        fact = 1;
    else if (n > 0)
        fact = n * factorial_recursive(n-1);
    return fact;
}

long long int factorial_iterative(int n){
    long long int fact = 1;
    if ( n==0 || n==1)
        fact = 1;
    else if (n > 0)
        while(n > 0){
            fact = fact * n;
            n--;
        }
    return fact;
}

int main(){
    clock_t start_clock, stop_clock;
    time_t start_time, end_time;
    long  long int n;
    cout << "Enter a positive number " << endl;
    cin >> n;
    start_time = time(NULL); // or you can write tim(&start_time)
    //cout << "start time : " << start_time << endl;
    start_clock = clock(); 
    cout << factorial_recursive(n) << endl;
    stop_clock = clock();
    double duration = static_cast<double>(stop_clock - start_clock)/CLOCKS_PER_SEC;
    cout << " The processor time for recursive method is " << duration << endl;
    end_time = time(NULL);

    cout << "Seconds passed by time are :" << (end_time - start_time) << endl;

    start_clock = clock();
    cout << factorial_iterative(n) << endl;
    stop_clock = clock();
    duration = static_cast<double>(stop_clock - start_clock)/CLOCKS_PER_SEC;
    cout << " The processor time for iterative method is " << duration << endl;
}