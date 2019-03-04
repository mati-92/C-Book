#include <iostream>
#include <cstdlib>
#include <vector>

// Vectors are same as dynamic arrays with the ability to resize when an element is inserted or deleted
// The storage is handled automatically
// Vectors are placed in contiguous storage.
// Time: 
// - inserting data at the end takes differential time
// - removing the last element, only constant time
// - inserting or erasing at the beginning or in the middle is linear in time
// Iterators: begin(): returning an iterator pointinh to the first element in the vector
// end() - rbegin(): reverse iterator from last to first element
// rend():  returns a reverse iterator pointing to the theoretical element
// preceding the first element in the vector (considered as reverse end)
// cbegin(): constant iterator pointing to the first element
// cend(): constant iterator that points to the theoretical element
// that follows the last element in vector
// crbegin() - crend()

int main(){
    std::vector<int> v1;
    for (int i = 1; i <= 5; i++)
        v1.push_back(i*i);

    for (auto i = v1.begin(); i != v1.end(); ++i)
        std::cout << *i << " "; // ans: 1 4 9 16 25

    for (auto i = v1.cbegin(); i != v1.cend(); ++i)
        std::cout << *i << " "; // ans: 1 4 9 16 25
    
    for (auto i = v1.rbegin(); i != v1.rend(); ++i)
        std::cout << *i << "    "; // ans: 25    16    9    4    1 

    for (auto i = v1.crbegin(); i != v1.crend(); ++i)
        std::cout << *i << "    "; // and: 25    16    9    4    1

    return(EXIT_SUCCESS);
}