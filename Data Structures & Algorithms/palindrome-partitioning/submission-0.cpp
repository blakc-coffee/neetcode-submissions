class Solution {
    vector<vector<string>> res;
    string s;
    int len;
public:
    vector<vector<string>> partition(string s) {
        this->s=s;
        len=s.size();
        vector<string> temp;
        palinPart(temp,s,0);
        return res;
    }
    void palinPart(vector<string>& temp,string s ,int i){
        if(i==len){
            res.push_back(temp);
            return;
        }
        for(int j =i;j<=len;j++){
            
            string p1=s.substr(i,j-i+1);
            if(isPalin(p1)){
                temp.push_back(p1);
                palinPart(temp,s,j+1);
                temp.pop_back();

            }
        }
    }

    bool isPalin(string s){
        int len =s.size();
        if(len==1)
        return true;
        for(int i=0;i<len/2;i++){
            if(s[i]!=s[len-1-i])
            return false;
        }
        return true;
    }
};
