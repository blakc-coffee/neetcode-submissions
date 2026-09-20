#include <queue>
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        if(k==1)
        return nums;

        priority_queue<pair<int,int>> maxHeap;
        vector<int> res;
        int l=0,r=0,a=0,b=0;
        pair<int,int> temp;

        while(l<=r && r<nums.size()){
            maxHeap.push({nums[r],r});

            if(r-l+1==k){
                temp=maxHeap.top();

                while(temp.second<l){
                    maxHeap.pop();
                    temp=maxHeap.top();
                }
                res.push_back(temp.first);
                l++;
            }
            r++;
        }
        return res;
    }
};
