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

namespace chk {
void merge(int *arr, const int &left, const int &mid, const int &right) {
  const int n1 = mid - left + 1;
  const int n2 = right - mid;

  int *L = new int(n1);
  int *R = new int(n2);

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

  delete L;
  delete R;
}
void merge_sort(int *arr, const int &size, const int &left, const int &right) {
  if (left < right) {
    const int mid = (left + right) / 2;
    merge_sort(arr, size, left, mid);
    merge_sort(arr, size, mid + 1, right);
    merge(arr, left, mid, right);
  }
}
} // namespace chk
