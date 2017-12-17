/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Algorithms.cpp
 * Author: dennis
 * 
 * Created on December 17, 2017, 9:00 PM
 */

#include "Algorithms.h"
#include <iostream>
#include <numeric>
namespace algorithms{

using std::cout;
using std::vector;

vector<int> biggest_subarray(const vector<int>& arr)
{

    if(arr.size() <= 1) return arr;
    int index = 0;
    int size;
    vector<int> result{arr[0]};
    
    for(int i = 1; i < arr.size(); ++i)
    {
        if (std::accumulate(arr.begin() + index, arr.begin() + index + i, 0) <= arr[i])
        {
            index = i;
            size = 1;
        }
        else
        {
            vector<int>::const_iterator first = arr.begin() + index;
            vector<int>::const_iterator last = arr.begin() + size;
            vector<int> current_result(first, last);
            if (std::accumulate(current_result.begin(), current_result.end(),0) > std::accumulate(result.begin(), result.end(),0)) result = current_result;
            ++size;
        }
            
    }
    return result;    
}

}