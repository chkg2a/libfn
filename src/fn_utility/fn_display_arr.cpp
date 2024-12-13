/*
 * ********************************************
 *
 *
 *    fn_display_arr.cpp
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-11-01 23:17 by ChK
 *    Updated: 2024-11-01 23:17 by ChK
 *
 * ********************************************
 */

#include "fn_utility.h"

namespace chk {
template<typename T>
void display_arr(const T * arr, const int &size) {
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << std::endl;
}
template void display_arr<int>(const int * arr, const int & size);
template void display_arr<float>(const float * arr, const int & size);
template void display_arr<std::string>(const std::string * arr, const int & size);
} // namespace chk
