#include <iostream>

class matrix{
    friend matrix operator+(const matrix &a, const matrix &b);
    public: 
        matrix(matrix &a);
        matrix(int row, int columns);
        double &operator()(int i,int j);
        void operator=(const matrix &a);
        matrix unity(int rows, int columns);
    private: 
        double *p;
        int m ,n;
};