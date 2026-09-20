#include <bits/stdc++.h>
class Solution {
    vector<string> res;
    int n;
public:
    vector<string> generateParenthesis(int n) {
        string temp;
        this->n=n;
        backTrack(temp,0,0);
        return res;        
    }

    void backTrack(string temp,int left,int right){
        if(left==n && right==n){
            res.push_back(temp);
            return;
        }
        else if(left>n || right>n || right>left)
        return;
        else{
            temp.push_back('(');
            backTrack(temp,left+1,right);

            temp.pop_back();
            temp.push_back(')');
            backTrack(temp,left,right+1);
        }
    }
};
