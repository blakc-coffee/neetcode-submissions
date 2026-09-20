class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> hset;
        int maxL=0;
        int n=s.size();
        vector<bool> dp(n+2,false);
        dp[n]=true;

        for(string x : wordDict){
            hset.insert(x);
            maxL= maxL>x.size() ? maxL : x.size(); 
        }

        for(int i=s.size()-1;i>=0;i--){
            for(int j=1;j<=maxL;j++){
                if(i+j<=n+1){
                    string t=s.substr(i,j);
                    if(hset.count(t)>=1 && dp[i+j])
                    dp[i]=true;
                }
            }
        }

        return dp[0];        
    }
};
