class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),end=0;
        vector<int> parent(n,-1);
        vector<int> dp (n,1);
        vector<int> res;

        for(int i=0;i<n;i++){
            
            for(int j=0;j<i;j++){
                /*if(nums[i]%nums[j]==0){
                    dp[i]=max(dp[i],dp[j]+1);
                    parent[i]=j;
                }*/
                if(nums[i]%nums[j]==0 && dp[j]>=dp[i]){
                    dp[i]=dp[j]+1;
                    parent[i]=j;
                }
            }
                if(dp[end]<dp[i])
                end =i;
        }

        while(end>=0){
            res.push_back(nums[end]);
            end=parent[end];
        }

        return res;
        
    }
};