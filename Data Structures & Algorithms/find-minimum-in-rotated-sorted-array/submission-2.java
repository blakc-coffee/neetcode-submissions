class Solution {
    public int findMin(int[] nums) {
        int len=nums.length,l=0,r=len-1,m;

        while(l<r && r<len){
            m=(l+r)/2;

            if(nums[m]>nums[m+1])
                return nums[m+1];

            if(m!=0 && nums[m]<nums[m-1])
                return nums[m];

            if(nums[m]>nums[l])
                l=m+1;
            
            if(nums[m]<nums[r])
                r=m-1;

        }
        return nums[0];
    }
}
