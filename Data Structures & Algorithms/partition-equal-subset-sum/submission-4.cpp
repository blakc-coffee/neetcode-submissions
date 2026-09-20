class Solution {
    vector<int > nums;

    int sum=0;
public:
    bool canPartition(vector<int>& nums) {
        this->nums=nums;
        for(int x: nums)
            sum+=x;
        
        if(sum%2!=0)
        return false;
        sum/=2;

        vector<bool> dp (sum+1,false);
        dp[0]=true;
        for(int x: nums){
            for(int j=sum;j>=x;j--){
                if(dp[j-x])
                    dp[j]=true;
            }
        }

        return dp[sum];
    }

};
