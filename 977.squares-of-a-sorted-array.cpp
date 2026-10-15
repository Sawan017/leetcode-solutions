/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr ;
        vector<int> arr2 ;

        int l = 0, i = 0 , k;
        k= nums.size() - 1;
        for( i = 0 ; i < nums.size(); i++){
            nums[i] *= nums[i];
        }
         for( i = 0 ; i < nums.size(); i++){
            if(nums[l]>nums[k]){
                arr.push_back(nums[l]);
                l++;
            }
            else{
                arr.push_back(nums[k]);
                k--;
            }
        }
            for(i=0 ; i<nums.size(); i++){
                arr2.push_back(arr[nums.size() - i - 1]);
            }

        
       return arr2;
    }
};
// @lc code=end

