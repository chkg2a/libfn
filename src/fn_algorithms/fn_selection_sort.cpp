/*
 * ********************************************
 *
 *
 *    fn_selection_sort.cpp
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-11-01 14:44 by ChK
 *    Updated: 2024-11-01 14:44 by ChK
 *
 * ********************************************
*/

#include "fn_algorithms.h"
#include <utility>

namespace chk{
void selection_sort(int arr[], const int & size){
  for(int i=0; i < size; i++){
    int minI = i;
    for(int j = i + 1; j < size +1; j++){
      if(arr[minI] > arr[j]){
        arr[minI] ^= arr[j];
        arr[j] ^= arr[minI];
        arr[minI] ^= arr[j];
      }
    }
  }
}
}
