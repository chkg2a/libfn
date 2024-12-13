#ifndef FN_ALGORITHMS_H
#define FN_ALGORITHMS_H
#include<string>

namespace chk{

int binary_search(const int arr[], const int &size, const int &toSearch);
int linear_search(const int arr[], const int &size, const int &toSearch);

template<typename T>
void bubble_sort(T * arr, const int & size);
template<typename T>
void selection_sort(T * arr, const int & size);
template<typename T>
void insertion_sort(T * arr, const int & size);
template<typename T>
void merge_sort(T * arr, const int & left, const int & right);
template<typename T>
void quick_sort(T * arr, const int & low, const int & high);
}

#endif // !FN_ALGORITHMS_H
