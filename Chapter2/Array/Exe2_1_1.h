#ifndef EXE2_1_1_H
#define EXE2_1_1_H

#include <vector>
#include <algorithm>
using std::vector;
/*
2.1.1 Remove Duplicates from Sorted Array
Given a sorted array, remove the duplicates in place 
such that each element appear only once and return the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.
For example, Given input array A = [1, 1, 2],
Your function should return length = 2, and A is now [1, 2]
*/

//code 1

class Solution1
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if(nums.empty()) return 0;
        
        int index = 0;
        for(size_t i = 0; i < nums.size(); ++i){
            if(nums[index] != nums[i]){
                nums[++index] = nums[i];
            }
        }
        return index + 1;
    }
};

//Code 2 using STL
class Solution2
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        return std::distance(nums.begin(), std::unique(nums.begin(), nums.end()));
    }
};


//Code 3 unsing STL
class Solution3
{
public:
    template<typename InIt, typename OutIt>
    OutIt removeDuplicates(InIt first, InIt last, OutIt output)
    {
        while(first != last){
            //with * value is also set
            //without * do not change anything
            output++ = first;
            first = upper_bound(first, last, *first);
        }
        return output;
    }

    int removeDuplicates(vector<int>& nums)
    {
        return std::distance(nums.begin(), removeDuplicates(nums.begin(), nums.end(), nums.begin()));
    }

};

#endif