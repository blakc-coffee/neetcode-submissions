#include <bits/stdc++.h>
#include <cmath>
class Solution {
    vector<string> comb= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> res;
    string digits;
public:
    vector<string> letterCombinations(string digits) {
        string temp;
        if(digits=="")
        return res;
        this->digits=digits;
        backTrack(temp,0);
        return res;
    }

    void backTrack(string temp,int index){
        if(index==digits.size()){
            res.push_back(temp);
            return;
        }
        else if(index<digits.size()){
            char ch = digits[index];
            int x = ch - '0';

            for(int i =0;i<comb[x].size();i++){
                temp.push_back(comb[x][i]);
                backTrack(temp,index+1);
                temp.pop_back();
            }
        }
    }
};
