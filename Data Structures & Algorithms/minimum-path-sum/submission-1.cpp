class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();        
        vector<vector<int>> dp (m,vector<int> (n,0));
        dp[0][0]=grid[0][0];

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 and j==0)
                continue;
                int p1=INT_MAX,p2=INT_MAX;
                if(j>=1 && i>=0){
                    p1=grid[i][j] + dp[i][j-1];
                }
                if(i>=1 && j>=0){
                    p2=grid[i][j] + dp[i-1][j];
                }
                dp[i][j]=min(p1,p2);
            }
        }

        return dp[m-1][n-1];
        
    }
};