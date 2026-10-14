/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> arr;
        arr.push_back(nums[0]);
        for(int i = 0 ; i < nums.size()-1; i++){ 
            if(nums[i] != nums[i+1] ){
                arr.push_back(nums[i+1]);
            }  
        }
        if(nums.size() == 1){
             return nums.size();
        }
       
        for(int i = 0 ; i < arr.size(); i++){
            nums[i] =  arr[i];
        }
        return arr.size();
       
    }
};
// @lc code=end

