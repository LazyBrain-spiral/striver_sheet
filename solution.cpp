#include <iostream>
#include <vector>
using namespace std;

// class Solution
// {
// public:
//     void rotate(vector<int> &nums, int k)
//     {
//         k = k % nums.size();
//         vector<int> temp(k);
//         int j = k;

//         for (int i = 0; i < k; i++)
//         {
//             temp[i] = nums[nums.size() - j];
//             j--;
//         }

//         for (int i = nums.size() - 1; i >= k; i--)
//         {
//             nums[i] = nums[i - k];
//         }

//         for (int i = 0; i < k; i++)
//         {
//             nums[i] = temp[i];
//         }
        

//     }
// };

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int k = 2;

//     Solution obj;
//     obj.rotate(arr, k);

//     return 0;
// }


//REVERSE ARRAY

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        vector<int> temp;

        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
            
        }

        int zero_count = nums.size() - temp.size();

        nums.clear();

        nums.insert(nums.end(), temp.begin(), temp.end());

        for (int i = 0; i < zero_count; i++)
        {
            nums.push_back(0);
        }
        
        }
};