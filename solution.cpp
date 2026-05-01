#include <iostream>
#include <vector>
using namespace std;

// class Solution
// {
// public:
//     int sortedArray(vector<int> &nums)
//     {
//         int count = 0;
//         int max_count = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] == 1)
//             {
//                 count++;
//                 if (count > max_count)
//                 {
//                     max_count = count;
//                 }
//             }
//             else
//             {

//                 count = 0;
//             }
//         }
//         return max_count;
//     }
// };

// int main()
// {
//     vector<int> nums = {1, 1, 0, 0, 1, 1, 1};

//     Solution obj;

//     int result = obj.sortedArray(nums);

//     cout << result;
// }
class Solution
{
public:
    int twice(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 1; i <= n; i++)
        {
            int count = 0; 

            for (int j = 0; j < n; j++)
            {
                if (nums[j] == i) 
                {
                    count++;

                    if (count == 1) 
                    {
                        return i; 
                    }
                }
            }
        }

        return -1; 
    }
};