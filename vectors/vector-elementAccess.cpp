#include <iostream>
#include <cstdlib>
#include <vector>

// reference operator [g]: returns a reference to the element at position 'g' in the vector
// at(g): returns a reference to the element 'g' in the vector
// front(): returns a reference to the first element in vector
// back(): returns a reference to the last element in vector
// data(): returns a direct pointer to the memory array used 
// internally by the vector to store its owned elements

using namespace std; 

int main(){
    vector<int> v;
    for (int i = 1; i <= 10; i++)
        v.push_back(i * 10);
    cout << "\nReference operator [g]: v[2]=" << v[2] <<   "  v[0]=" << v[0];
    cout << "\n at : v.at(4)=" << v.at(4);
    cout << "\n front() : v.front()=" << v.front();
    cout << "\n back() : v.back()=" << v.back();
    int *pt = v.data(); // pointer to the first element
    cout << "\n The first element is " << *pt << " and its address is " << pt << endl;

    return(EXIT_SUCCESS);

}

/* ANS:
Reference operator [g]: v[2]=30  v[0]=10
 at : v.at(4)=50
 front() : v.front()=10
 back() : v.back()=100
 The first element is 10 and its address is 0x7fd2c9c02af0
 */