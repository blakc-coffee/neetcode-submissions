#include <bits/stdc++.h>
class Solution {

public:
    int maxProduct(vector<int>& nums) {
        int len=nums.size(),cmax=nums[0],cmin=nums[0];
        int ans=cmax;

        for(int i=1;i<len;i++){
            int c1=nums[i];
            int c2=nums[i]*cmin;
            int c3=nums[i]*cmax;

            cmax=max({c1,c2,c3});
            cmin=min({c1,c2,c3});
            ans=max(cmax,ans);
        }
        return ans;
        
    }

};
