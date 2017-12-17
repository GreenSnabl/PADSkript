/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Algorithms.h
 * Author: dennis
 *
 * Created on December 17, 2017, 9:00 PM
 */

#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include <vector>

namespace algorithms{

// Kadanes algorithm
// find the biggest conteguous subarray within an array
std::vector<int> biggest_subarray(const std::vector<int>& arr);  

}

#endif /* ALGORITHMS_H */

