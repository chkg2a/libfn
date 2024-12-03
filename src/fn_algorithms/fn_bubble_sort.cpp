/*
 * ********************************************
 *
 *
 *    fn_bubble_sort.cpp
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-12-03 20:08 by ChK
 *    Updated: 2024-12-03 20:08 by ChK
 *
 * ********************************************
 */

#include "fn_algorithms.h"

namespace chk {
void bubble_sort(int arr[], const int &size) {
  for (int i = 0; i < size - 1; i++) {
    bool swapped = false;
    for (int j = 0; j < size - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        arr[j] ^= arr[j + 1];
        arr[j + 1] ^= arr[j];
        arr[j] ^= arr[j + 1];
        swapped = true;
      }
    }
    if (!swapped) {
      return;
    }
  }
}
} // namespace chk
