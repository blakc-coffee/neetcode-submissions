class Solution {
    public int search(int[] nums, int target) {
        int l=0,r=nums.length-1,m;
        if(nums[l]==target)
        return l;
        if(nums[r]==target)
        return r;


        while(l<=r){
            m=(l+r)/2;

            if(nums[m]==target)
            return m;

            if(nums[l]<=nums[m]){
             if( target < nums[m] && target >= nums[l])
            r=m-1;
            else
            l=m+1;
            }
            else{
            if(nums[r]>=nums[m] && target>nums[m] && target<=nums[r])
            l=m+1;
            else
            r=m-1;
            }
        }

        return -1;
    }
}
