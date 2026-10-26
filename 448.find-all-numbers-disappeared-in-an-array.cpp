/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       map<int,int> mp;
       vector<int> arr;
       for(int i = 0 ; i < nums.size(); i++){
         mp[nums[i]] = i;
       }
       for(int j = 1 ; j < nums.size()+1 ; j++){
        if(mp.find(j) != mp.end()){
            continue;
        }
        else{
            arr.push_back(j);
        }
       }
        
       
       return arr;
    }
};
// @lc code=end

