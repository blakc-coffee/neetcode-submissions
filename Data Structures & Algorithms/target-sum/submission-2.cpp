#include <bits/stdc++.h>
class Solution {
    vector<int> nums;
    int target;
    int res=0;
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        this->nums=nums;
        this->target=target;
        backTrack(0,0);
        return res;
    }

    void backTrack(int index,int sum){
        if(index==nums.size()){
            if(sum==target)
            res++;
        return; 
        }
        else if(index<nums.size()){
            backTrack(index+1,sum+nums[index]);
            backTrack(index+1,sum-nums[index]);
        }
    }
};
