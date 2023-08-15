#include <iostream>
#include <vector>

using namespace std;

void count_sort(vector<int> v, int pos) {
  int n = v.size();

  vector<int> freq(10, 0);

  for (int i = 0; i < n; i++) {
    freq[(v[i] / pos) % 10]++;
  }

  for (int i = 1; i < 10; i++) {
    freq[i] += freq[i - 1];
  }

  vector<int> ans(n);

  for (int i = n - 1; i >= 0; i--) {
    ans[--freq[(v[i] / pos) % 10]] = v[i];
  }

  for (int i = 0; i < n; i++) {
    v[i] = ans[i];
  }
}

void radix_sort(vector<int> &v) {
  int max_elem = INT_MIN;

  for (auto x : v) {
    max_elem = max(x, max_elem);
  }

  for (int pos = 1; max_elem / pos > 0; pos *= 10) {
    count_sort(v, pos);
  }
}

int main() {
  vector<int> arr = {5, 3, 7, 2, 7, 34, 2};

  radix_sort(arr);

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
