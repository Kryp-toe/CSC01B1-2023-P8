#ifndef UJROWS_H_INCLUDED
#define UJROWS_H_INCLUDED

#include <iostream>

using namespace std;

template <typename T>
class UJRow
{
public:
    
    //Constructors/destructor
    UJRow();
    UJRow(int intRows, T tDefault);
    UJRow(const UJRow<T>& objOriginal);
    ~UJRow();
    
    const static int DEFAULT_ROWS = 5;
    static const int INITIAL_VALUE = 0;
    
    //accessors
    int getRows() const;
    
    //operator overloading
    T& operator[] (int intIndex);
    
private:
    
    int _rows;
    T* _data;
    
    void clone(const UJRow<T>& objOriginal);
    void alloc(int intRows, T tDefault);
    void dealloc();
    
};

#include "UJRows.imp"

#endif




