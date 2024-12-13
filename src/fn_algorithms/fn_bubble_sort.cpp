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
#include<string>

namespace chk {
template<typename T>
void bubble_sort(T * arr, const int &size) {
  for (int i = 0; i < size - 1; i++) {
    bool swapped = false;
    for (int j = 0; j < size - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        T temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }
    if (!swapped) {
      return;
    }
  }
}
// Explicit instantiation
template void bubble_sort<int>(int* arr, const int& size);
template void bubble_sort<float>(float* arr, const int& size);
template void bubble_sort<std::string>(std::string* arr, const int& size);
} // namespace chk
