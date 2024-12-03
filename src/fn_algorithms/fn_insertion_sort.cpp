/*
 * ********************************************
 *
 *
 *    fn_insertion_sort.cpp
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-12-03 21:15 by ChK
 *    Updated: 2024-12-03 21:15 by ChK
 *
 * ********************************************
*/

#include "fn_algorithms.h"

namespace chk {
  void insertion_sort(int *arr, const int &size){
    for(int i = 0; i < size; i++){
      int key = arr[i];
      int j = i - 1;
      while (j >= 0 && arr[j] > key){
        arr[j+1] = arr[j];
        j--;
      }
      arr[j+1] = key;
    }
  }
}
