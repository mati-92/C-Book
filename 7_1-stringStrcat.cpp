#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
    char message[80];
    strcpy(message, "- Hi Mahdi!");
    strcat(message, "\n+ Hi Meysam!");
    strcat(message, "\n- GOOZ bokhor!");
    cout << message << endl;
    return(EXIT_SUCCESS);
} 