#ifndef FN_ALGORITHMS_H
#define FN_ALGORITHMS_H

namespace chk{

int binary_search(const int arr[], const int &size, const int &toSearch);
int linear_search(const int arr[], const int &size, const int &toSearch);

void bubble_sort(int arr[], const int & size);
void selection_sort(int arr[], const int & size);
void insertion_sort(int arr[], const int & size);
void merge_sort(int arr[], const int & size, const int & left, const int & right);
}

#endif // !FN_ALGORITHMS_H
