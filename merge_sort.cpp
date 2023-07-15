#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int l, int m, int r) {
  int a1_length = m - l + 1;
  int a2_length = r - m;

  vector<int> a1(a1_length);
  vector<int> a2(a2_length);

  for (int i = 0; i < a1_length; i++) {
    a1[i] = arr[l + i];
  }

  for (int j = 0; j < a2_length; j++) {
    a2[j] = arr[m + 1 + j];
  }

  int i = 0;
  int j = 0;
  int k = l;

  while (i < a1_length && j < a2_length) {
    if (a1[i] < a2[j]) {
      arr[k++] = a1[i++];
    } else {
      arr[k++] = a2[j++];
    }
  }

  while (i < a1_length) {
    arr[k++] = a1[i++];
  }

  while (j < a2_length) {
    arr[k++] = a2[j++];
  }
}

void merge_sort(vector<int> &arr, int l, int r) {
  int m = (l + r) / 2;

  if (l >= r) {
    return;
  }

  merge_sort(arr, l, m);
  merge_sort(arr, m + 1, r);

  merge(arr, l, m, r);
}

int main() {
  vector<int> arr = {
      534, 34, 6, 32, 6, 76, 34, 345,
  };

  int n = arr.size();

  merge_sort(arr, 0, n - 1);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}