#include <iostream>
#include <vector>
using namespace std;

// class Solution
// {
// public:
//     bool check(vector<int> &nums)
//     {
//         int count = 0;

//         for (int i = 0; i<nums.size(); i++)
//         {
//             if (nums[i]<=nums[(i+1)%nums.size()])
//             {

//             }
//             else{
//                 count++;
//             }
//         }
//         if (count <= 1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//         };
// };

// class Solution
// {
// public:
//     int removeDuplicates(vector<int> &nums)
//     {

//         int i = 0;
//         for (int j = 1; j < nums.size(); j++)
//         {
//             if (nums[j]!=nums[i])
//             {
//                 nums[i+1] = nums[j];
//                 i++;
//             }

//         }
//         return (i + 1);

//     }
// };