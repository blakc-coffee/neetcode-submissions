class Solution {
    string s;
    int len,count=0;
public:
    int countSubstrings(string s) {
        this->s=s;
        len=s.size();
        for(int i=0;i<len;i++){
            palinCheck(i,i);
            palinCheck(i,i+1);
        }
        return count;
    }

    void palinCheck(int l,int r){
        while(l>=0 && r<=len && s[r]==s[l]){
            l--;
            r++;
            count++;
        }
        int palin_len=(r+1)-l -2;
    }
};
