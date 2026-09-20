#include <bits/stdc++.h>
class Solution {
    int target;
    vector<vector<int>> res;
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
     sort(candidates.begin(),candidates.end());
        this->target=target;
        vector<int> temp;
        backTrack(candidates,0,0,temp);
        return res;
    }

    void backTrack(vector<int>& candidates,int index,int sum, vector<int>& temp){
        if(sum==target){
        res.push_back({temp});
        return;
        }
        if(sum<target && index<candidates.size()){
            temp.push_back(candidates[index]);
            backTrack(candidates,index+1,sum+candidates[index],temp);

            while(index+1<candidates.size() && candidates[index]==candidates[index+1])
            index+=1;

            if(index<candidates.size()){
            temp.pop_back();
            backTrack(candidates,index+1,sum,temp);
            }
        }
    }
};
