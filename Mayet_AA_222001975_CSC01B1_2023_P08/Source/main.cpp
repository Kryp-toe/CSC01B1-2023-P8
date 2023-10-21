#include "PointCloud2D.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    PointCloud2D<int> objOne(5, 5, 10); // Parameterized Constructor
    PointCloud2D<int> objTwo(8, 8, 5);
    
    cout << "OBJ ONE" << endl << endl;
    
    // Overloaded Insertion Stream Operator
    cout << objOne << " ";
    
    cout << endl << endl << "OBJ TWO" << endl << endl;
    
    // Overloaded Insertion Stream Operator
    cout << objTwo << " ";
    
    cout << endl << endl;
    
    // Overloaded Assignment Operator
    objTwo = objOne;
    
    cout << endl << endl << "NEW OBJ TWO (SAME AS OBJ ONE)" << endl << endl;
    
    // // Overloaded Insertion Stream Operator
    cout << objTwo << endl;
    
    cout << endl;
    
    return 0;
}




