class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int m=points.size(),n=points[0].size();
        vector<long long> dp (n,0);
        vector<long long> prev=vector<long long>(points[0].begin(),points[0].end());
        if(m==1)
        return *max_element(points[0].begin(),points[0].end());
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                long long temp=LLONG_MIN;
                for(int k=0;k<n;k++){
                    temp=max(temp,points[i][j] + prev[k] -abs(k-j));
                }
                dp[j]=temp;
            }
            prev=dp;
        }

        return *max_element(dp.begin(),dp.end());
        
    }
};