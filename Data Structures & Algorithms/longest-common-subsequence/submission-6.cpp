class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        int res=0,ival=0;
        vector<vector<int>> mat (m+1,vector<int>(n+1,0));

        for( int j=1;j<=n;j++){
            for(int i=1;i<=m;i++){
                if(text1[i-1]==text2[j-1])
                    mat[i][j]=1+mat[i-1][j-1];
                else
                mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                
            }
        }
        return mat[m][n];
        
        
    }
};
