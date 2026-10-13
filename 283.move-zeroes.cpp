/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        
        
        // while(i < nums.size()){
        //     if(nums.empty()){
        //         return;
        //     }
        //     if(nums[i] != 0){
        //         i++;
        //         continue;
        //     }
                for(int j=0; j<nums.size()  ; j++){
                    if(nums[j] !=0){
                swap(nums[i],nums[j]);
                i++;
                }
            }   
               
        
        
    
    

    
    }


    
};
// @lc code=end

