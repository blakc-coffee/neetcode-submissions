class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums[nums.size()-1]-nums[0],m;

        while(r>=l){
            m=(l+r)/2;
            int t=0;
            for(int i=1;i<nums.size();i++){
                if(nums[i]-nums[i-1]<=m){
                    i++;
                    t++;
                }
            }
            if(t>=p)
            r=m-1;
            else l=m+1;
        }
        return l;
      
    }
};