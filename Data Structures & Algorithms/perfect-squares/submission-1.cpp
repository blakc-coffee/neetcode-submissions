class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,INT_MAX);
        int cs=1;//current square number
        dp[0]=0;
        dp[1]=1;
        //dp[i]
        for(int i=2;i<=n;i++){
            if(i==(cs+1)*(cs+1)){
            dp[i]=1;
            cs++;
            }
            else{
                for(int j=1;j<=cs;j++)
                dp[i]=min(dp[i],dp[j*j]+dp[i-j*j]);
            }
        }
        return dp[n];
        
    }
};