class Solution {
    int len;
    string s;
    vector<int> memo; 
public:
    int numDecodings(string s) {
        len=s.size();
        this->s=s;
        memo.resize(s.size(),-1);
        return dp(0);      
    }

    int dp(int i){
        if(i==len)
        return 1;

        if(memo[i]!=-1) return memo[i];

        if(i==len-1 && s[i]!='0') return 1;
        if(s[i]=='0')
        return 0;
        //when 2 digit combo is not possible
        if(!(
                (s[i] -'0'<=2 && s[i+1]- '0'<=6)
                || (s[i] -'0'==1)
            )){
                memo[i]=dp(i+1);
                return memo[i];
            }
        
        memo[i] = dp(i+1) + dp(i+2);
        return memo[i];
    }
};
