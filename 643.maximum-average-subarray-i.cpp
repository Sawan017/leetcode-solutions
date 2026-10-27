/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int first = 0 ,  last = 0   ;
        double max = 0, avg = 0 , sum = 0;
        for(int j = 0 ; j< k ; j++){
            sum += nums[j];
        }
        max = (double)sum/k;
        for(int i = 1 ; i < nums.size()-k +1 ; i++){
            first = nums[i-1];
            last = nums[i+k-1];
            sum = sum + last - first;
            avg = (double)sum/k;
            if(max < avg){
                max = avg;
            }
        }
        return max;
    }
};
// @lc code=end

