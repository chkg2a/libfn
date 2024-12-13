/*
 * ********************************************
 *
 *
 *    fn_merge_sort.cpp
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-12-03 20:48 by ChK
 *    Updated: 2024-12-03 20:48 by ChK
 *
 * ********************************************
 */

#include "fn_algorithms.h"
#include <vector>

namespace chk {
template<typename T>
void merge(T *arr, const int &left, const int &mid, const int &right) {
  const int n1 = mid - left + 1;
  const int n2 = right - mid;

  std::vector<T> L(n1), R(n2);

  for (int i = 0; i < n1; i++)
    L[i] = arr[i + left];
  for (int i = 0; i < n2; i++)
    R[i] = arr[i + mid + 1];

  int i = 0, j = 0, k = left;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j])
      arr[k++] = L[i++];
    else
      arr[k++] = R[j++];
  }

  while (i < n1)
    arr[k++] = L[i++];
  while (j < n2)
    arr[k++] = R[j++];
}
template<typename T>
void merge_sort(T *arr, const int &left, const int &right) {
  if (left < right) {
    const int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
  }
}
template void merge<int>(int * arr, const int & left, const int& mid, const int & right);
template void merge<float>(float * arr, const int & left, const int& mid, const int & right);
template void merge<std::string>(std::string * arr, const int & left, const int& mid, const int & right);
template void merge_sort<int>(int * arr, const int & left, const int & right);
template void merge_sort<float>(float * arr, const int & left, const int & right);
template void merge_sort<std::string>(std::string * arr, const int & left, const int & right);
} // namespace chk
