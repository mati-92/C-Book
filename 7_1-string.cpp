#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    char message[20] = "0123456789012345678";
    message[0] = 'H';
    message[1] = 'E';
    message[2] = 'L';
    message[3] = 'L';
    message[4] = 'O';
    message[5] = '\0'; // If you comment this
   // then the result is "HELLO56789012345678"
    cout << message << "\n";
    return (EXIT_SUCCESS);

}