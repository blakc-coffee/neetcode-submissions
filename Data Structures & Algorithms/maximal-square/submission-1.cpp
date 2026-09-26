class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<vector<int>> sq (m+1,vector<int> (n+1,0));
        int res=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(matrix[i][j]=='1'){
                sq[i+1][j+1]=1+min({sq[i+1][j],sq[i][j+1],sq[i][j]});
                res=max(res,sq[i+1][j+1]);
               }
            }
        }


        return (res)*(res);
        
    }
};