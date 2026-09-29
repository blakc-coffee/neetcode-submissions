class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int l=strs.size();
        vector<vector<int>> dp (m+1,vector<int> (n+1,0));

        for(int k=0;k<l;k++){
            int z=0,o=0;
            for(char ch :strs[k]){
                if(ch=='0')
                z++;
                else
                o++;
            }

            for (int i=m;i>=0;i--){
                for(int j=n;j>=0;j--){
                    if(i-z>=0 and j-o>=0)
                    dp[i][j]=max(dp[i][j],dp[i-z][j-o]+1);
                }
            }
        }

        return dp[m][n];
        
    }
};