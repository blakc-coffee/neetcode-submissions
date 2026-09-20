class Solution {
    vector<bool> visited;
    vector<vector<int>> res;
    vector<int> nums;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        this->nums=nums;
        visited.resize(nums.size());
        vector<int> temp;
        backTrack(temp);
        return res;
    }

    void backTrack(vector<int>& temp){
        if(temp.size()==nums.size()){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(visited[i])
            continue;

            temp.push_back(nums[i]);
            visited[i]=true;
            backTrack(temp);

            temp.pop_back();
            visited[i]=false;
        }
    }
};
