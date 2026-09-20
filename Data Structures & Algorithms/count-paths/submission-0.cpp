class Solution {
    vector<vector<int>> wtr;
public:
    int uniquePaths(int m, int n) {
        wtr.resize(m,vector<int>(n,-1));
        wtr[0][0]=1;
        return dp(m-1,n-1);
    }

    int dp(int i,int j){
            if(wtr[i][j]!=-1)
            return wtr[i][j];
        wtr[i][j]=0;
        if(i-1>=0 and j>=0){
            if(wtr[i-1][j]==-1)
            wtr[i-1][j]=dp(i-1,j);

            wtr[i][j]+=wtr[i-1][j];
        }        

        if(i>=0 and j-1>=0){
            if(wtr[i][j-1]==-1)
            wtr[i][j-1]=dp(i,j-1);

            wtr[i][j]+=wtr[i][j-1];
        }

        return wtr[i][j];

    }
};
