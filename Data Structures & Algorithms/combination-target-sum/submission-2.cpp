class Solution {
public:
vector<vector<int>> soln;
int target;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        this->target= target;
        vector<int> temp;
        backTrack(nums,0,0,temp);
        return soln;
    }

    void backTrack(vector<int>& nums , int index,int sum ,vector<int>& temp){
        if(sum==target)
        soln.push_back({temp});

        if(sum<target && index<nums.size()){
            temp.push_back(nums[index]);
            backTrack(nums,index,sum+nums[index],temp);
            temp.pop_back();
            backTrack(nums,index+1,sum,temp);
        }
    }
};
