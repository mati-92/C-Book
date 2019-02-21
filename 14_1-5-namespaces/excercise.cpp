#include <iostream>
#include <cstdlib>
//#include "met_office.h" // when declaring functions here, you
// do not need to include it. Just compile and link the code
// with met_office.cxx.

using namespace std;

void temprature(void);
void pressure(void); 
// when you declare the function here then you DO NOT need to
// include the header file when in the met_office.cxx the 'using'
// directive is bein used! Since using directive works as if 
// the namespace had never been declared and moreover it
// opens up the namespace to the file.

int main(){
    temprature();
    pressure();

    return(EXIT_SUCCESS);
}

// 1- without "using" directive in the header file:
// - include the corresponding header file
// - useing 'namespacename::' for invoking functions

// 2- with "using" directive in header file
// - linking the source file with the main code
// - without including header file
// - with declaring the functions
// - without using "name::" since the 'using' directive
// opens up the namespace. 