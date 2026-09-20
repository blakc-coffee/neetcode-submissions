class Solution {
    int n;
    vector<int> memo;
public:
    int tribonacci(int n) {
        this->n=n;
        memo.resize(n+1,0);

        return helper(n);
    }
    
    int helper(int n){
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        if(memo[n]) return memo[n];

        memo[n-1]=helper(n-1);
        memo[n-2]=helper(n-2);
        memo[n-3]=helper(n-3);
        return memo[n-1] +memo[n-2] +memo[n-3];
    }
};