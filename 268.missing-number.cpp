/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
//         int count = 0 , missing;
//         for(int i = 0; i < nums.size() + 1; i++){
//              for(int j = 0; j < nums.size() ; j++){
//             if(nums[j] != i){
//                  count++;
//             }
//             if(count == nums.size()){
//                     missing = i;
//                     break;
//                  }
//         }
//         count = 0;
//     }
//      return missing;
int Sum = 0 , missing;
        for(int i = 0 ; i < nums.size(); i++){
            Sum += nums[i];
        }
        missing = (nums.size()*(nums.size()+1))/2 - Sum;
        return missing;
    }
};
// @lc code=end

