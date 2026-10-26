/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0 , rightSum = 0 , ind = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            leftSum = 0 , rightSum = 0 ;
            for(int j = 0 ; j<nums.size(); j++ ){
                if(j < i){
                    leftSum += nums[j];
                }
                else if(j >i){
                rightSum += nums[j];
                }
                
            }
            if(leftSum == rightSum){
                ind = i;
                break;
            }
        }
        return ind;
        
    }
};
// @lc code=end

