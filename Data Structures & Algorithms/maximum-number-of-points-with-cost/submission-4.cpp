class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int m=points.size(),n=points[0].size();
        vector<long long> dp (n,0);
        vector<long long> prev=vector<long long>(points[0].begin(),points[0].end());
        if(m==1)
        return *max_element(points[0].begin(),points[0].end());

        for(int i=1;i<m;i++){
            vector<long long> left (n,0);
            vector<long long> right (n,0);
            left[0]=prev[0];
            right[n-1]=prev[n-1];
            for(int j=1;j<n;j++)
                left[j]=max(prev[j],left[j-1]-1);
            
            for(int j=n-2;j>=0;j--)
                right[j]=max(prev[j],right[j+1]-1);

            for(int j=0;j<n;j++)
                dp[j]=points[i][j] + max(left[j],right[j]);
    
            prev=dp;
        }
        return *max_element(dp.begin(),dp.end());
    }
};