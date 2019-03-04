#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

// assign(): assrigns new value to an element by replacing old one
// push_back(): pushes elements into a vector from the back
// pop_back(): remove elements from a vector from the back
// insert(): inserts new elements before the element at specified position
// erase(): remove elements from a vector with specific position or range
// swap(): swap two vectors
// clear(): remove all the elements of the vector
// emplace():  It extends the container by inserting new element at position
// emplace_back():  It is used to insert a new element into the vector container, the new element is added to the end of the vector

int main(){
    vector<int> v;
    v.assign(5,10); // assigns 5 times 10
    cout << "The vector elements are: ";
    for(auto i = v.begin(); i != v.end(); ++i)
    //for(int i = 0; i < v.size(); ++i) cout << v[i] << "   ";
        cout << *i << "   ";
    cout << endl;

    v.push_back(15);
    int n = v.size();
    cout << "\n The last element is: " << v[n-1];
    v.pop_back();
    n = v.size();
    cout << "\n The last element is: " << v[n-1];
    v.insert(v.begin(), 15);
    cout << "\n The first element is: " << v[0];
    v.erase(v.begin());
    cout << "\n The first element is: " << v[0];
    v.emplace(v.begin(), 10);
    v.emplace_back(20);
    n = v.size();
    cout << "\n The first and last elemets are: " << v[0] << "  " << v[n-1];
    v.clear();
    cout << "\n Vector size after erase(): " << v.size() << endl;
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {10, 20, 30};
    v1.swap(v2);
    cout << " After swap v1 is " ;
    for(auto i = v1.begin(); i != v1.end(); ++i)
        cout << *i << "     ";
    cout << "\n After swap v2 is ";
    for(auto i = v2.begin(); i != v2.end(); ++i)
        cout << *i << "   ";   

    return(EXIT_SUCCESS);
}