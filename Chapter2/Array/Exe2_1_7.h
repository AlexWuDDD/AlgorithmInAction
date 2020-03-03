#ifndef EXE2_1_7_H
#define EXE2_1_7_H

#include <unordered_map>
#include <vector>

using std::unordered_map;
using std::vector;

/*
2.1.7 Two Sum
Given an array of intergers, find two nums such that they add up to a specific target number
The function twoSum should return indices of the two numbers such that they add up to the target,
where index 1 must be less than index2. 
Please note that your returned answers(both index1 and index 2)are not zero-based.
You may assume that each input woyld have exactly one solution.
Input numbers = {2, 7, 11, 15} target = 9
Output: index1=1, index=2
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mapping;
        vector<int> result;
        for(int i = 0; i < nums.size(); ++i){
            mapping[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); ++i){
            const int gap = target - nums[i];
            if(mapping.find(gap) != mapping.end() && mapping[gap] > i){
                result.push_back(i+1);
                result.push_back(mapping[gap] + 1);
                break;
            }
        }
        return result;
    }
};








#endif