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
void display_vec(const std::vector<int> nums) {
  for (int i : nums) {
    std::cout << i << ' ';
  }
  std::cout << std::endl;
}
} // namespace chk
