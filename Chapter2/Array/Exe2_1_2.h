#ifndef EXE2_1_2_H
#define EXE2_1_2_H

#include <vector>
using std::vector;

/*
2.1.2 Remove Duplicateds from Sorted Array II
Follow up for "Remove Duplicates":What if duplicates are allowed at most twice?
For example.Given sorted array A = [1,1,1,2,2,3],
Your function should return length = 5,and A is now [1,1,2,2,3]
*/

class Solution1
{
public:
    static int removeDuplicates(vector<int>& nums)
    {
        if(nums.size() <= 2) return nums.size();
        int index = 2;
        for(size_t i = 2; i < nums.size(); ++i){
            if(nums[i] != nums[i-2]){
                nums[index++]= nums[i];
            }
        }
        return index;
    }
};

class Solution2
{
public:
    int removeDuplicates(vector<int> nums)
    {
        const int n = nums.size();
        int index = 0;
        for(int i = 0; i< n; ++i){
            if(i > 0 && i < n-1 && nums[i] == nums[i-1] && nums[i] == nums[i+1]){
                continue;
            }
            nums[index++] = nums[i];
        }
        return index;
    }    
};


#endif