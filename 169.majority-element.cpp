/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0 , maj = nums[0] ;
        for(int j = 0 ; j < nums.size(); j++){
           if(maj == nums[j]){
            count++;
           }
           else{
            count--;
            if(count == 0){
                maj = nums[j];
                count = 1;
           }
           }
            }
            return maj;
        }
};
// @lc code=end

