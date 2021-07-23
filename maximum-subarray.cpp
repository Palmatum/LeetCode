/*
MAXIMUM SUBARRAY

Given an integer array nums, find the contiguous subarray 
(containing at least one number) which has the largest sum 
and return its sum.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = nums[0];
        
        for(int i=1; i<nums.size(); i++) {
            if(nums[i-1]>0) nums[i] += nums[i-1];
            sum = max(sum, nums[i]);
        }
    
        return sum;
    }
};