class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        vector<vector<int>> up (m,vector<int>(n,0));
        up[0][0]=1;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1)
                up[i][j]=0;
                else{
                    if(i>=1 and j>=0){
                        up[i][j]+=up[i-1][j];
                    }
                    if(j>=1 and i>=0){
                    up[i][j]+=up[i][j-1]; 
                    }
                }
            }
        }

        return up[m-1][n-1];
        
    }
};