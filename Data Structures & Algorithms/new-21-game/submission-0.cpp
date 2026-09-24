class Solution {
public:
    double new21Game(int n, int k, int maxPts) {

    if(k==0 or n>=k+maxPts)
    return 1.0;
    vector<double> dp (n+1,0);
    double dpSum=1,prob=1.0/maxPts,res=0;
    dp[0]=1;


    for(int i=1;i<=n;i++){
        if(i>maxPts && i-maxPts-1<k) 
            dpSum-=dp[i-maxPts-1];

        dp[i]=prob*dpSum;

        if(i<k)
            dpSum+=dp[i];
    }
    for(int i=k;i<=n;i++)
        res+=dp[i];

    return res;
    }
};