#include "Algorithms.h"
#include <iomanip>
#include <iostream>
#include <vector>


using std::vector;
using std::cout;

using namespace algorithms;


int main()
{
    vector<int> okay{-2, 7 , 12, 2, -4, -6, 6, -1, 2};
    
    vector<int> res = biggest_subarray(okay);
    
    for(auto i : res)
        cout << std::setw(4) << std::right << i;
    cout << "\n";
    
   
    return 0;
}