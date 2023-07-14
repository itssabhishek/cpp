#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int currentElement = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > currentElement)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = currentElement;
    }
}

int main()
{
    vector<int> arr = {5, 32, 6, 32, 6, 23};
    insertionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}