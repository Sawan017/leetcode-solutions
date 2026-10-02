/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool check = false;
        map<int , int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]) != mp.end() ) {
                check= true;
                break;
            }
              mp[nums[i]] = i;
    
        }
        if ( check == false){
            return false;
        }
        else{
            return true;
        }
        
}
};
// @lc code=end

