/*
 * ********************************************
 *
 *
 *    fn_linear_search.cpp
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-11-01 14:43 by ChK
 *    Updated: 2024-11-01 14:43 by ChK
 *
 * ********************************************
 */

#include "fn_algorithms.h"

namespace chk {
int linear_search(const int * arr, const int &size, const int &toSearch) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == toSearch) {
      return 1;
    }
  }
  return 0;
}
} // namespace chk
