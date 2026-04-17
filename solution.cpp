#include <iostream>
#include <vector>
#include <algorithm> 


void printArray(const std::vector<int> &arr)
{
    for (int val : arr)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}


void selectionSort(std::vector<int> &arr)
{
    int n = arr.size();
    // Traverse through all array elements
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        std::swap(arr[i], arr[min_idx]);
    }
}

// 2. Bubble Sort
void bubbleSort(std::vector<int> &arr)
{
    int n = arr.size();
    // Traverse through all array elements
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++)
        {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then break
        if (!swapped)
        {
            break;
        }
    }
}

// 3. Insertion Sort
void insertionSort(std::vector<int> &arr)
{
    int n = arr.size();
    // Traverse from 1 to n
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        // Place the key at its correct position
        arr[j + 1] = key;
    }
}

// Main function to test everything
int main()
{
    // Initialize three identical vectors for testing
    std::vector<int> test_arr1 = {64, 25, 12, 22, 11};
    std::vector<int> test_arr2 = {64, 25, 12, 22, 11};
    std::vector<int> test_arr3 = {64, 25, 12, 22, 11};

    std::cout << "Original array: ";
    printArray(test_arr1);
    std::cout << "-----------------------" << std::endl;

    // Test Selection Sort
    selectionSort(test_arr1);
    std::cout << "Selection Sort: ";
    printArray(test_arr1);

    // Test Bubble Sort
    bubbleSort(test_arr2);
    std::cout << "Bubble Sort:    ";
    printArray(test_arr2);
    insertionSort(test_arr3);
    std::cout << "Insertion Sort: ";
    printArray(test_arr3);

    return 0;
}