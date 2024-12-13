/*
 * ********************************************
 *
 *
 *    fn_display_vec.cpp
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-11-05 13:04 by ChK
 *    Updated: 2024-11-05 13:04 by ChK
 *
 * ********************************************
 */

#include "fn_utility.h"

namespace chk {
template<typename T>
void display_vec(const std::vector<T> nums) {
  for (T i : nums) {
    std::cout << i << ' ';
  }
  std::cout << std::endl;
}
template void display_vec<int>(const std::vector<int> nums);
template void display_vec<float>(const std::vector<float> nums);
template void display_vec<std::string>(const std::vector<std::string> nums);
} // namespace chk
