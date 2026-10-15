/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (int i = 0 ; i < nums.size(); i++){
            if (nums[i] != val){
                // arr.push_back(nums[i]);
                nums[count] = nums[i] ;
                 count++;
                }
        
            
        }
        // for (int i = 0 ; i < arr.size(); i++){
        //      nums[i] =  arr[i] ;
        // }
        return count;
        
    }
};
// @lc code=end

