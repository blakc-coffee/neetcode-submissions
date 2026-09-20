class Solution {
public:
        vector<vector<int>> soln;

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        backTrack(nums,0,temp);
        return soln;        
    }

    void backTrack(vector<int>& nums,int index,vector<int>& temp){
        
        if(index==nums.size())
        soln.push_back({temp});

        if(index<nums.size()){
            temp.push_back(nums[index]);
            backTrack(nums,index+1,temp);
            temp.pop_back();
            backTrack(nums,index+1,temp);
        }

    }

};
