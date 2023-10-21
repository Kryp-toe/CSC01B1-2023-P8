#ifndef POINTCLOUD2D_H_INCLUDED
#define POINTCLOUD2D_H_INCLUDED

#include <iostream>
#include "UJRows.h"

using namespace std;

template <typename T>
class PointCloud2D
{
public:

    PointCloud2D();
    PointCloud2D(int intRows, int intCols, int initValue);
    PointCloud2D(const PointCloud2D<T>&);
    ~PointCloud2D();
    
    // Getters - Accessors
    int getRows() const;
    int getCols() const;
    
    // Operator Overloading
    const PointCloud2D& operator=(const PointCloud2D<T>& objRHS);
    PointCloud2D<T>& operator[] (int intIndex);
    
    template <typename T1>
    friend ostream& operator<<(ostream& osLHS, const PointCloud2D<T1>& objRHS);

    // Constants
    static const int NUM_ROWS = 10;
    static const int NUM_COLS = 10;
    static const int INITIAL_VALUE = 0;
    
private:

    void allocMemory(int intRows, int intCols, int initValue);
    void deallocMemory();
    void clone(const PointCloud2D<T>&);
    
    UJRow<T>** _data;
    int _rows;
    int _cols;
};

#include "PointCloud2D.imp"

#endif // POINTCLOUD2D_H_INCLUDED




