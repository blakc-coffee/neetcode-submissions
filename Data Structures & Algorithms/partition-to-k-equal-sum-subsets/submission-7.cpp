#include <bits/stdc++.h>
class Solution {
    vector<int> nums;
    int t=0,k;
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        vector<int> buckets (k,0);
        this->k=k;
        this->nums=nums;
        sort(nums.begin(),nums.end());
        for(int x: nums)
        t+=x;

        if(t%k!=0)
        return false;

        t=t/k;
        return backTrack(buckets,0);
    }

    bool backTrack(vector<int> buckets,int ind){
        if(ind==nums.size()) return true;

        for(int j=0;j<k;j++){
            if(buckets[j] + nums[ind] >t) continue;
            buckets[j]+=nums[ind];

            if(backTrack(buckets,ind +1)) return true;

            buckets[j]-=nums[ind];
            if(buckets[j]==0) return false;
        }
        return false;
    }
};