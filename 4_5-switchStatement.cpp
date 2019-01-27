#include <iostream>
using namespace std;

int main(){
    char reply;
    cout << " Do you want to continue? ( Y or N )";
    cin >> reply;
    switch(reply){
        case 'Y':
        case 'y':
            cout << " Continuing ... \n";
            // Code for yes
            break;
        case 'N':
        case 'n':
            cout << " Exiting ... \n";
            break;
        default:
            cout << " '" << reply << "' is not a valid reply \n";
            break;
    };
    return(0);
}