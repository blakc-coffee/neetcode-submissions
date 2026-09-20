#include <queue>
#include <algorithm>
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(intervals.begin(),intervals.end());

        for(int i=0;i<intervals.size();i++){
            temp=intervals[i];
            if(res.empty())
            res.push_back({temp[0],temp[1]});
            else{

            vector<int> prev=res.back();

            if(temp[0]<=prev[1] && (temp[1]>=prev[1]) ){
                res.pop_back();
                res.push_back({prev[0],temp[1]});

            }
            else if(temp[0]<=prev[1] && (temp[1]<=prev[1]) ){
                res.pop_back();
                res.push_back({prev[0],prev[1]});
            }
            else{
                res.push_back({temp[0],temp[1]});
            }
            }
        }


        return res;        
    }
};