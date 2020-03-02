#ifndef EXE2_1_4_H
#define EXE2_1_4_H
#include <vector>
using std::vector;

/*
2.1.4 Search in ROtated Sorted Array II
Follow up for "Search in Rotated Sorted Array": What if duplicates are allowed?
Would this affect the run-time complexity? How and why?
Wirte a function to determin if a given target is in the array
*/

class Solution
{
public:
    bool search(const vector<int> &nums, int target)
    {
        int first = 0, last = nums.size();
        while(first != last){
            const int mid = first + (last - first)/2;
            if(nums[mid] == target){
                return true;
            }
            if(nums[first] < nums[mid]){
                if(nums[first] <= target && target < nums[mid]){
                    last = mid;
                }
                else{
                    first = mid + 1;
                }
            }
            else if(nums[first] > nums[mid]){
                if(nums[mid] < target && target <= nums[last-1]){
                    first = mid + 1;
                }
                else{
                    last = mid;
                }
            }
            else{
                //skip duplicated one
                ++first;
            }

        }
        return false;
    }
};





#endif