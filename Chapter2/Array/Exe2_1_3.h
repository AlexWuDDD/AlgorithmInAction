#ifndef EXE2_1_3_H
#define EXE2_1_3_H

#include <vector>
using std::vector;

/*
2.1.3 Search in Rotated Sorted Array
suppose a sorted array is rotated at some pivot unknown to your beforehand
(i.e. 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2)
You are given a target value to search. If found in the array return its index, otherwise return -1
You may assume to duplicate exists in the array
*/

class Solution
{
public:
    int search(const vector<int> &nums, int target)
    {
        int first = 0, last = nums.size();
        while(first != last){
            const int mid = first + (last - first) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[first] <= nums[mid]){
                if(nums[first] <=target && target < nums[mid]){
                    last = mid;
                }
                else{
                    first = mid;
                }
            }
            else{
                if(nums[mid] < target && target <= nums[last-1]){
                    first = mid + 1;
                }
                else{
                    last = mid;
                }
            }
        }
        return -1;
    }
};





#endif