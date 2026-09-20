class Solution {
    string s;
public:
    string longestPalindrome(string s) {
        this->s=s;
        string max_pal="";

        for(int i=0;i<s.size();i++){
            int l,r;
            int odd=expand(i,i);
            int even=expand(i,i+1);
            if(odd>even){
             l=i-odd/2;
             r=l+odd-1;
            }
            else{
                l=i+1-even/2;
                r=l+even-1;
            }
            string temp = s.substr(l,r+1-l);
            if(temp.size()>max_pal.size())
            max_pal=temp;
        }

        return max_pal;
    }

    int expand(int l,int r){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
};
