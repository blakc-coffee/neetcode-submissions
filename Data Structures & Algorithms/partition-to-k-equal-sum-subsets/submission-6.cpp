#include <bits/stdc++.h>
class Solution {
public:
vector<int> nums;
int t=0,k;
    bool canPartitionKSubsets(vector<int>& nums, int k) {
      this->nums=nums;
      this->k=k;
      vector<int> sums(k,0);
      sort(nums.begin(),nums.end(),greater<int>());

    for(int i: nums)
    t+=i;
    if(t%k!=0)
    return false;
    t=t/k;
    return backTrack(sums,0);
    }
    //j is the index to iterate through nums
    bool backTrack(vector<int>& sums,int j){
        if(j==nums.size()) return true;
       for(int i=0;i<k;i++){
        int x=nums[j];
        if(sums[i] + x>t) continue;
        sums[i]+=x;
        if(backTrack(sums,j+1)) return true;
        //backTrack(sums,j+1) is false when nums[j] doesnt go into any oh=f teh buckets
        sums[i]-=x;
        if(sums[i]==0) break;
       }
        return false;
    }
};