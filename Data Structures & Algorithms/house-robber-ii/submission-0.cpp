class Solution {
    vector<int> nums;
public:
    int rob(vector<int>& nums) {
        this->nums=nums;
        int len = nums.size();
        if(len==3)
        return max({nums[0],nums[1],nums[2]});
        if(len==2)
        return max(nums[0],nums[1]);
        if(len==1)
        return nums[0];
        //memoX for [0...n-1] and memoY for[1...n-2]
        vector<int> memoX (len,0);
        vector<int> memoY (len,0);
        memoX[0]=nums[0];
        memoX[1]=max(nums[0],nums[1]);;
        memoY[1]=nums[1];
        memoY[2]=max(nums[2],nums[1]);

        memoHelper(memoX,0+2,len-2);
        memoHelper(memoY,1+2,len-1);
        return max(memoX[len-2],memoY[len-1]);
    }

    void memoHelper(vector<int>& memo ,int x,int high){
        if(x<=high){
            memo[x]=max(memo[x-1],memo[x-2]+nums[x]);
            memoHelper(memo,x+1,high);
        }
        else return;
    }
};
