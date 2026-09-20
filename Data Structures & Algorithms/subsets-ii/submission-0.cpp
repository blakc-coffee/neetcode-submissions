#include <bits/stdc++.h>

class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        backTrack(nums,0,temp);
        return res;

    }

    void backTrack(vector<int>& nums ,int i,vector<int> temp){
        if(i>=nums.size()){
        res.push_back({temp});
        return;
        }
        else{
            temp.push_back(nums[i]);
            backTrack(nums,i+1,temp);

            while(i+1<nums.size() && nums[i]==nums[i+1] )
            i++;
            
            temp.pop_back();
            backTrack(nums,i+1,temp);
        }


    }
};
