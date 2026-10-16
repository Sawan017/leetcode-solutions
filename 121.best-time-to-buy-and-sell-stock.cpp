/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy = prices[0],sell , val , profit1 , profit2 = 0 ;
       for(int i = 0 ; i< prices.size(); i++) { 
        if(buy >= prices[i]){
            buy = prices[i];
        }
        sell = prices[i];
        profit1 = sell - buy;
        if(profit2 <= profit1){
            profit2 = profit1;
        }
        }
       return profit2;
    }
};
// @lc code=end

