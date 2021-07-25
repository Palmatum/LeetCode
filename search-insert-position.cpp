/*
Search Insert Position

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0; int h=nums.size()-1;
        
        while(l<=h) {
            int m = (l+h)/2;
            if(target==nums[m]) return m;
            else if(target>nums[m]) l=m+1;
            else h=m-1;
        }
        return l;
    }
};