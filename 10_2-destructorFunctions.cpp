#include <iostream>

// Destructors are needed to avoid memory leakage.
// When memory is allocated with the "new" operator,
// it is necessary to deallocate that!
// Destructors are callled implicitly when an object goes
// out of scope. Explicit invoking a destructor may lead 
// into deleting a memory that has already been deleted.

class matrix{
    public: 
        matrix(int rows, int columns);
        matrix(matrix &a);
        ~matrix(); // declare destruction function
    private: 
        int m, n;
        double *pt;
};