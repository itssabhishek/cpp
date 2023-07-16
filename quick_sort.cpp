#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int first, int last) {
  int pivot = arr[last];
  int i = first - 1;
  int j = first;

  for (; j < last; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }

  swap(arr[i + 1], arr[last]);

  return i + 1;
}

void quick_sort(vector<int> &arr, int first, int last) {
  if (first >= last) {
    return;
  }

  int pi = partition(arr, first, last);
  quick_sort(arr, first, pi - 1);
  quick_sort(arr, pi + 1, last);
}

int main() {
  vector<int> arr = {6, 2, 7, 9, 32, 76};

  quick_sort(arr, 0, arr.size() - 1);

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}