class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int l=s.size();
        vector<int> dp(l+1,INT_MAX);
        dp[l]=0;
        set<string> hset;
        int maxl=0;

        for(string x: dictionary){
            hset.insert(x);
            maxl = maxl > x.size()? maxl : x.size();
        }

        for(int i =l-1;i>=0;i--){
            for(int j=1;j<=maxl;j++){
                if(i+j>l)
                break;
                string t=s.substr(i,j);
                if(hset.count(t)==1){
                    dp[i]=min(dp[i],dp[i+t.size()]);
                }
                else
                dp[i]=min(dp[i],dp[i+1]+1);
            }
        }
        return dp[0];
        
    }
};