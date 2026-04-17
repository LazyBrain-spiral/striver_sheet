#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    // 1. Compare and merge into temp
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]); // Fixed: changed () to []
            right++;
        }
    }

    // 2. These loops are now OUTSIDE the main while loop
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // 3. The copy-back loop is now INSIDE the merge function
    // Fixed: i <= high instead of i < high
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low]; // Fixed: changed () to []
    }
}

// 4. Removed 'int mid' from parameters
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    { // Safest to use >= for the base case
        return;
    }

    int mid = (low + high) / 2; // Declared mid locally

    mergeSort(arr, low, mid); // Now the 3 arguments match the signature
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
} // Removed the unnecessary semicolon here