/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0] , currentSum = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            if(currentSum +nums[i] <= nums[i]){
            currentSum = nums[i];
            if(maxSum < currentSum){
                maxSum = currentSum;
            }
            }
            else if(currentSum+ nums[i]> nums[i]){
                currentSum += nums[i]; 
                if(maxSum < currentSum){
                maxSum = currentSum;
            }
            }
          

        }
        return maxSum;
    }
};
// @lc code=end

