/*
 * ********************************************
 *
 *
 *    fn_utility.h
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-11-01 23:20 by ChK
 *    Updated: 2024-11-01 23:20 by ChK
 *
 * ********************************************
*/

#ifndef FN_UTILITY_H
#define FN_UTILITY_H
#include <iostream>
#include <vector>
#include <string>

namespace chk {
template<typename T>
void display_arr(const T * arr, const int &size);
template<typename T>
void display_vec(const std::vector<T> nums);
}

#endif // !FN_UTILITY_H
