/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <iostream>
#include <map>
using namespace std;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* temp1 = l1;
    ListNode* temp2 = l2;
    ListNode* result = nullptr;
    ListNode* tail = nullptr;

    int val1;
    int val2;
        int carry = 0 ;
   while(temp1 != nullptr || temp2 != nullptr){
    val1 = 0;
    val2 = 0;
    if(temp1 != nullptr){
        val1 =  temp1 -> val;
        temp1 = temp1 -> next;
    }
   if(temp2 != nullptr){
    val2 =  temp2 -> val;
    temp2 = temp2 -> next;
   }
   int sum = val1 + val2 + carry;
    int digit = sum%10;
    carry = sum/10;

     ListNode* newNode = new ListNode(digit);
      if(result == nullptr){
        result = newNode;
        tail = newNode;
      }
      else {
        tail ->next = newNode;
        tail = newNode;
      }
    }
      if(carry!= 0){
        tail -> next = new ListNode(carry);
      }
   
    
    return result;
    }
};
// @lc code=end

