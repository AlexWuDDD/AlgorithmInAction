#ifndef EXE2_1_6_H
#define EXE2_1_6_H
#include <vector>
#include <unordered_map>
#include <cmath>
#include <cstdio>

using std::vector;
using std::unordered_map;

/*
2.1.6 Longest Consecutive Sequence
Given an unsorted array of integers, find the length of the longest consecutive elements
For example, Given[100, 4, 200, 1, 3, 2], The longest consecutive elements sequence is [1, 2, 3, 4]. 
Return its length: 4
*/
class Solution1
{
public:
    int longestConsecutive(const vector<int> &nums)
    {
        unordered_map<int, bool> used;
        for(auto i : nums) used[i] = false;

        int longest = 0;

        for(auto i :nums){
            if(used[i]) continue;

            int length = 1;
            used[i] = true;

            for(int j = i + 1; used.find(j) != used.end(); ++j){
                used[j] = true;
                ++length;
            }
            for(int j = i - 1; used.find(j) != used.end(); --j){
                used[j] = true;
                ++length;
            }
            longest = std::max(longest, length);
        }

        return longest;
    }
};


class Solution2
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_map<int, int> map;
        int size = nums.size();
        int l = 1;
        for(int i = 0; i < size; ++i){
            printf("******** current i is %d **********\n", i);
            if(map.find(nums[i]) != map.end()) {
                printf("we have %d in map", nums[i]);
                continue;
            }
            printf("we do not have %d in the map ", nums[i]);
            printf("set %d to 1\n", nums[i]);
            map[nums[i]] = 1;
            
            if(map.find(nums[i] - 1) != map.end()){
                printf("we have %d in map\n", nums[i]-1);
                l = std::max(l, mergeCluster(map, nums[i]-1, nums[i]));
            }
            if(map.find(nums[i] + 1) != map.end()){
                printf("we have %d in map\n", nums[i]+1);
                l = std::max(l, mergeCluster(map, nums[i], nums[i]+1));
            }
            printf("*********************************\n");
        }
        return size == 0?0:l;
    }

private:
    int mergeCluster(unordered_map<int, int>&map, int left, int right)
    {
        printf("left : %d, right: %d\n", left, right);
        int upper = right + map[right] -1;
        int lower = left - map[left] + 1;
        printf("upper : %d, lower: %d\n", upper, lower);
        int length = upper - lower +1;
        printf("length: %d\n", length);
        map[upper] = length;
        map[lower] = length;
        return length;
    }
};







#endif