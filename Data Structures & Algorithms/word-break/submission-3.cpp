class Solution {
    vector<optional<bool>> memo;
    string s;
    vector<string> wordDict;
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        this->wordDict=wordDict;
        this->s=s;
        memo.resize(s.size()+1,nullopt);
        return solve(0);
    }

    bool solve(int i){
        if(i==s.size()){
        memo[i]=true;
        return true;
        }
        if(i>s.size())
        return false;
        if(memo[i].has_value())
        return memo[i].value();
        else{
            for(string str : wordDict){
                int l1=str.size();
                string subs = s.substr(i,l1);
                if(subs==str){
                memo[i] =solve(i+l1);
                if(memo[i].has_value() && !memo[i].value())
                continue;
                return memo[i].value();
                }   
            }
            memo[i]=false;
        }
        return false;
        
    }

    
};
