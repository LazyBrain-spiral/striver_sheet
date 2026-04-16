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


    return 0;
}

#include <iostream>
#include <vector>


void merge(std::vector<int> &arr, int left, int mid, int right)
{
    
    int n1 = mid - left + 1;
    int n2 = right - mid;


    std::vector<int> left_half(n1);
    std::vector<int> right_half(n2);

    
    for (int i = 0; i < n1; i++)
    {
        left_half[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        right_half[j] = arr[mid + 1 + j];
    }

    
    int i = 0;    
    int j = 0;    
    int k = left; 

    while (i < n1 && j < n2)
    {
        if (left_half[i] <= right_half[j])
        {
            arr[k] = left_half[i];
            i++;
        }
        else
        {
            arr[k] = right_half[j];
            j++;
        }
        k++;
    }

    
    while (i < n1)
    {
        arr[k] = left_half[i];
        i++;
        k++;
    }

    
    while (j < n2)
    {
        arr[k] = right_half[j];
        j++;
        k++;
    }
}


void mergeSort(std::vector<int> &arr, int left, int right)
{
    if (left >= right)
    {
        return; 
    }

    int mid = left + (right - left) / 2;


    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);


    merge(arr, left, mid, right);
}

void printVector(const std::vector<int> &arr)
{
    for (int num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}


int main()
{
    std::vector<int> unsorted_list = {38, 27, 43, 3, 9, 82, 10};

    std::cout << "Unsorted array: ";
    printVector(unsorted_list);

    
    int n = unsorted_list.size();
    mergeSort(unsorted_list, 0, n - 1);

    std::cout << "Sorted array:   ";
    printVector(unsorted_list);

    return 0;
}