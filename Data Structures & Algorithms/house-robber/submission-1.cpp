class Solution {
    vector<int> nums;
    

public:
    int rob(vector<int>& nums) {
        this->nums=nums;
        if(nums.size()==1)
        return nums[0];
        if(nums.size()==2)
        return max(nums[0],nums[1]);

        vector<int> f(nums.size(),0);
        f[0]=nums[0];
        f[1]=max(nums[0],nums[1]);
        helper(f,2);
        f.resize(nums.size());
        return f[nums.size()-1];
    }

    void helper(vector<int>& f,int x){
        if(x<nums.size()){
        f[x]=max(f[x-1],f[x-2] + nums[x]);
        helper(f,x+1);
        }
        else 
        return;
    }
};
