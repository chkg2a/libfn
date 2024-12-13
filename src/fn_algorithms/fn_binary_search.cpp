/*
 * ********************************************
 *
 *
 *    fn_binary_search.cpp
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-11-01 14:39 by ChK
 *    Updated: 2024-11-01 14:39 by ChK
 *
 * ********************************************
 */

#include "fn_algorithms.h"

namespace chk {
int binary_search(const int * arr, const int &size, const int &toSearch) {
  int low = 0;
  int high = size - 1;
  int mid;
  while (low <= high) {
    mid = (low + high) / 2;
    if(arr[mid] < toSearch){
      low = mid + 1;
    }else if(arr[mid] > toSearch){
      high = mid - 1;
    }else{
      return 1;
    }
  }
  return 0;
}
} // namespace chk
