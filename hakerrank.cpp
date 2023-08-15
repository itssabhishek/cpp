void almostSorted(vector<int> arr) {
  int n = arr.size();

  int i = 0;

  while (i < n - 1) {
    if (arr[i] > arr[i + 1]) {
      break;
    }
    i++;
  }

  if (i == n - 1) {
    cout << "yes" << endl;
    return;
  }

  int j = i + 1;

  while (j < n) {
    if (arr[j] < arr[i] && n == 2) {
      cout << "yes" << endl;
      cout << "swap " << i + 1 << " " << j + 1 << endl;
      return;
    }

    if (arr[j] >= arr[i]) {
      break;
    }

    j++;
  }

  if (j == n) {
    if (arr[j - 1] >= arr[i]) {
      cout << "yes" << endl;
      cout << "swap " << i + 1 << " " << j << endl;
      return;
    }

    cout << "no" << endl;
    return;
  }

  if (j != n) {
    if (arr[j - 1] >= arr[i - 1] && arr[i - 1] <= arr[i + 1]) {
      cout << "yes" << endl;
      cout << "swap " << i + 1 << " " << j << endl;
      return;
    }
    if (arr[j - 1] >= arr[i - 1]) {
      cout << "yes" << endl;
      cout << "reverse " << i + 1 << " " << j << endl;
      return;
    }

    cout << "no" << endl;
    return;
  }
}
