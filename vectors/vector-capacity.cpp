#include <iostream>
#include <cstdlib>
#include <vector>

// size() - max_size(): returns the maximum number of elements that vector can hold
// capacity(): return the size of the storage currently allocates to the vector an number of elemets
// resize() - empty(): returns whether the container is empty
// shrink_to_fit(): reduces the capacity of the container to fit its size and destroys all elements beyond capacity
// reserve(): requests that the vector capacity be at least anough to contain n elements

using namespace std;

int main(){
    vector<int> v;
    for (int i = 1; i <= 5; i++)
        v.push_back(i*i);
    cout << "size: " << v.size();
    cout << "\ncapacity: " << v.capacity();
    cout << "\nMax_size: " << v.max_size();
    v.resize(4);
    cout << "\n size: " << v.size();

    if( v.empty()== false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
    
    v.shrink_to_fit();
    cout << "\nNew capacity: " << v.capacity() << "\n";

    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
    cout << "\n";
    
    return(EXIT_SUCCESS);
}

/* ANS:
size: 5
capacity: 8
Max_size: 4611686018427387903
 size: 4
Vector is not empty
New capacity: 4
1 4 9 16 
*/