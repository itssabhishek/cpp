#include <iostream>
#include <vector>

using namespace std;

void problemOnSorting(vector<string> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != 1)
        {
            swap(arr[min], arr[i]);
        }
    }
}

int main()
{
    vector<string> arr = {"sfsadf", "abass", "urty", "jhsad", "mmasdjc", "babaab"};
    problemOnSorting(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}