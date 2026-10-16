/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0 , maxm = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] == 1 ){
                count++;
            }
            else{
                if(count > maxm){
                    maxm = count;
                }
                count = 0;
            }
            if(count > maxm){
                    maxm = count;
                }
            }
        return maxm;
    }
};
// @lc code=end

