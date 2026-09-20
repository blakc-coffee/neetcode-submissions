#include <algorithm>
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int> temp;
        vector<vector<int>> res;
        int count=0;

        for(int i=0;i<intervals.size();i++){
            temp=intervals[i];
            
            if(res.empty()){
            res.push_back({temp[0],temp[1]});
            continue;
            }
            vector<int> prev=res.back();

            if(temp[0]<prev[1] && temp[1]>=prev[1])
            count++;
            else if(temp[0]>prev[0] && temp[1]<prev[1]){
                count++;
                res.pop_back();
                res.push_back({temp[0],temp[1]});
            }

            else 
            res.push_back({temp[0],temp[1]});
        }
        return count;


        
    }
};