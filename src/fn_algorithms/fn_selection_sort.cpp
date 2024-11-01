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
void selectionSort(int arr[], const int & size){
  for(int i = 0; i < size - 1; i++){
    int currentMin = i;
    for(int j = i+1; j < size; j++){
      if(arr[currentMin] > arr[j]){
        currentMin = j;
      }
    }
    if(currentMin != i){
      std::swap(arr[currentMin], arr[i]);
    }
  }
}
}
