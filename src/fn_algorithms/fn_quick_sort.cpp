/*
 * ********************************************
 *
 *
 *    fn_quick_sort.cpp
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-12-12 16:37 by ChK
 *    Updated: 2024-12-12 16:37 by ChK
 *
 * ********************************************
*/

#include<fn_algorithms.h>

namespace chk{
template<typename T>
int partition(T * arr, const int & low, const int & high){
  T pivot = arr[high];
  int i = low - 1;

  for(int j = low; j < high; j++){
    if(arr[j] < pivot){
      i++;
      std::swap(arr[j],arr[i]);
    }
  }
  std::swap(arr[i], arr[high]);
  return i + 1;
}
template<typename T>
void quick_sort(T * arr, const int & low, const int & high){
  if(low < high){
    const int pi = partition(arr,low,high);
    quick_sort(arr,low,pi-1);
    quick_sort(arr,pi+1,high);
  }
}
template int partition<int>(int * arr, const int & low, const int & high);
template int partition<float>(float * arr, const int & low, const int & high);
template int partition<std::string>(std::string * arr, const int & low, const int & high);
template void quick_sort<int>(int * arr, const int & low, const int & high);
template void quick_sort<float>(float * arr, const int & low, const int & high);
template void quick_sort<std::string>(std::string * arr, const int & low, const int & high);
}
