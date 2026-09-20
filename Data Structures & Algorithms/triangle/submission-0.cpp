class Solution {
    vector<vector<int>> memo;
    vector<vector<int>> triangle;
    int l;
public: 
    int minimumTotal(vector<vector<int>>& triangle) {
        this->triangle=triangle;
        l=triangle.size();
        memo=vector<vector<int>>(triangle.size(),
        vector<int> (triangle[l-1].size()+1,INT_MIN));
        memo[0][0]=dp(0,0);
        return memo[0][0];         
    }

    int dp(int i,int j){
        if(i==l-1)
        return triangle[i][j];
        else{
            if(memo[i+1][j]==INT_MIN)
            memo[i+1][j]=dp(i+1,j);

            if(memo[i+1][j+1]==INT_MIN)
            memo[i+1][j+1]=dp(i+1,j+1);

            memo[i][j]=min(memo[i+1][j],memo[i+1][j+1]);
            return memo[i][j]+triangle[i][j];

        }
    }
};