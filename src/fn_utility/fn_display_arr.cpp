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

#include <iostream>
#include "fn_utility.h"

namespace chk {
void display(const int arr[], const int &size) {
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << std::endl;
}
} // namespace chk
