class Solution {
public:
    int climbStairs(int n) {
        vector<int> memo(n+1,-1);
        return helper(n,memo);
    }

    int helper(int n,vector<int>& memo){
        if(n<=2)
        return n;
        else if(memo[n]!=-1)
        return memo[n];
        else{
            memo[n-1]=helper(n-1,memo);
            memo[n-2]=helper(n-2,memo);
        return memo[n-1] + memo[n-2];
        }
    }

};
