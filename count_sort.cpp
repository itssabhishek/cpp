#include <iostream>
#include <string>
#include <vector>

using namespace std;

void count_sort(vector<int> &arr) {
  int n = arr.size();

  int max_elem = INT_MIN;

  for (int i = 0; i < n; i++) {
    max_elem = max(arr[i], max_elem);
  }

  vector<int> freq(max_elem + 1, 0);

  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
  }

  for (int i = 1; i <= max_elem; i++) {
    freq[i] += freq[i - 1];
  }

  vector<int> ans(n);
  for (int i = n - 1; i >= 0; i--) {
    ans[--freq[arr[i]]] = arr[i];
  }

  for (int i = 0; i < n; i++) {
    arr[i] = ans[i];
  }

  ans.clear();
}

int main() {
  vector<int> arr = {5, 7, 3, 2, 6, 34, 2};

  count_sort(arr);

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
