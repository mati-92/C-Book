#include <iostream>
#include <cstdlib>
#include <cstring> // For strcpy()

using namespace std;

// Function declration
// char *string(char *string1, const char *string2);

int main(){
    char message[80];
    strcpy(message, "HELLO");
    cout << message << endl;
    return(EXIT_SUCCESS);

}