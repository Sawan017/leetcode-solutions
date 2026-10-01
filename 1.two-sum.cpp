                                         /*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <map>
        using namespace std; 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int> mp;
        int i;
        for(i=0; i<nums.size(); i++){
            int needed = target - nums[i];
            if(mp.find(needed) != mp.end()){
                return {mp[needed] , i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

// @lc code=end

