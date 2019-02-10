#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]){
    cout << " The code name is: " << argv[0] << "\n";
    cout << " There are " << argc << " arguments \n";
    int I = 0;
    for ( int i = 0; i < argc; ++i){
        cout << " Argument " << i << " is " << argv[i] << "\n";
        I += atoi(argv[i]);
    }
    cout << " Sum of the integer Arg ist " << I << '\n';
    return(EXIT_SUCCESS);
}
